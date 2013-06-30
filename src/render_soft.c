/* MegaZeux
 *
 * Copyright (C) 2004-2006 Gilead Kutnick <exophase@adelphia.net>
 * Copyright (C) 2007 Alistair John Strachan <alistair@devzero.co.uk>
 * Copyright (C) 2007 Alan Williams <mralert@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "graphics.h"
#include "render.h"
#include "render_sdl.h"
#include "renderers.h"
#include "util.h"

#include "SDL.h"

static SDL_Color sdlpal[SMZX_PAL_SIZE];

static bool soft_init_video(struct graphics_data *graphics,
 struct config_info *conf)
{
  graphics->allow_resize = 0;
  graphics->bits_per_pixel = 32;

  // Screens smaller than 640x350 do weird things with the software renderer
  if(graphics->resolution_width < 640)
    graphics->resolution_width = 640;
  if(graphics->resolution_height < 350)
    graphics->resolution_height = 350;
  if(graphics->window_width < 640)
    graphics->window_width = 640;
  if(graphics->window_height < 350)
    graphics->window_height = 350;

  // We have 8-bit, 16-bit, and 32-bit software renderers
  if(conf->force_bpp == 8 || conf->force_bpp == 16 || conf->force_bpp == 32)
    graphics->bits_per_pixel = conf->force_bpp;

  return set_video_mode();
}

static bool soft_check_video_mode(struct graphics_data *graphics,
 int width, int height, int depth, bool fullscreen, bool resize)
{
  return true;
}

static bool soft_set_video_mode(struct graphics_data *graphics,
 int width, int height, int depth, bool fullscreen, bool resize)
{
  static struct sdl_render_data render_data;

  render_data.window = SDL_CreateWindow("MegaZeux",
   SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height,
   sdl_flags(depth, fullscreen, resize));

  if(!render_data.window)
  {
    warn("Failed to create window: %s\n", SDL_GetError());
    return false;
  }

  render_data.renderer =
   SDL_CreateRenderer(render_data.window, -1, SDL_RENDERER_SOFTWARE);

  if(!render_data.renderer)
  {
    warn("Failed to create renderer: %s\n", SDL_GetError());
    return false;
  }

  render_data.screen = SDL_GetWindowSurface(render_data.window);
  if(!render_data.screen)
  {
    warn("Failed to get window surface: %s\n", SDL_GetError());
    return false;
  }

  graphics->render_data = &render_data;
  return true;
}

static void soft_update_colors(struct graphics_data *graphics,
 struct rgb_color *palette, Uint32 count)
{
  struct sdl_render_data *render_data = graphics->render_data;
  SDL_Surface *screen = render_data->screen;

  Uint32 i;

  if(graphics->bits_per_pixel != 8)
  {
    for(i = 0; i < count; i++)
    {
      graphics->flat_intensity_palette[i] =
       SDL_MapRGBA(screen->format, palette[i].r, palette[i].g, palette[i].b,
       255);
    }
  }
  else
  {
    for(i = 0; i < count; i++)
    {
      sdlpal[i].r = palette[i].r;
      sdlpal[i].g = palette[i].g;
      sdlpal[i].b = palette[i].b;
    }
//    SDL_SetColors(screen, sdlpal, 0, count);
  }
}

static void soft_render_graph(struct graphics_data *graphics)
{
  struct sdl_render_data *render_data = graphics->render_data;
  SDL_Surface *screen = render_data->screen;

  Uint32 *pixels = (Uint32 *)screen->pixels;
  Uint32 pitch = screen->pitch;
  Uint32 bpp = screen->format->BitsPerPixel;
  Uint32 mode = graphics->screen_mode;

  pixels += pitch * ((screen->h - 350) / 8);
  pixels += (screen->w - 640) * bpp / 64;

  SDL_LockSurface(screen);
  if(bpp == 8)
    render_graph8((Uint8 *)pixels, pitch, graphics, set_colors8[mode]);
  else if(bpp == 16)
    render_graph16((Uint16 *)pixels, pitch, graphics, set_colors16[mode]);
  else if(bpp == 32)
  {
    if(!mode)
      render_graph32(pixels, pitch, graphics, set_colors32[mode]);
    else
      render_graph32s(pixels, pitch, graphics, set_colors32[mode]);
  }
  SDL_UnlockSurface(screen);
}

static void soft_render_cursor(struct graphics_data *graphics,
 Uint32 x, Uint32 y, Uint8 color, Uint8 lines, Uint8 offset)
{
  struct sdl_render_data *render_data = graphics->render_data;
  SDL_Surface *screen = render_data->screen;

  Uint32 *pixels = (Uint32 *)screen->pixels;
  Uint32 pitch = screen->pitch;
  Uint32 bpp = screen->format->BitsPerPixel;
  Uint32 flatcolor;

  pixels += pitch * ((screen->h - 350) / 8);
  pixels += (screen->w - 640) * bpp / 64;

  if(bpp == 8)
    flatcolor = (color << 24) | (color << 16) | (color << 8) | color;
  else
    flatcolor = graphics->flat_intensity_palette[color];

  if(bpp == 16)
    flatcolor |= flatcolor << 16;

  SDL_LockSurface(screen);
  render_cursor(pixels, pitch, bpp, x, y, flatcolor, lines, offset);
  SDL_UnlockSurface(screen);
}

static void soft_render_mouse(struct graphics_data *graphics,
 Uint32 x, Uint32 y, Uint8 w, Uint8 h)
{
  struct sdl_render_data *render_data = graphics->render_data;
  SDL_Surface *screen = render_data->screen;

  Uint32 *pixels = (Uint32 *)screen->pixels;
  Uint32 pitch = screen->pitch;
  Uint32 bpp = screen->format->BitsPerPixel;
  Uint32 mask;

  pixels += pitch * ((screen->h - 350) / 8);
  pixels += (screen->w - 640) * bpp / 64;

  if((bpp == 8) && !graphics->screen_mode)
    mask = 0x0F0F0F0F;
  else
    mask = 0xFFFFFFFF;

  SDL_LockSurface(screen);
  render_mouse(pixels, pitch, bpp, x, y, mask, w, h);
  SDL_UnlockSurface(screen);
}

static void soft_sync_screen(struct graphics_data *graphics)
{
  struct sdl_render_data *render_data = graphics->render_data;
  SDL_RenderPresent(render_data->renderer);
}

void render_soft_register(struct renderer *renderer)
{
  memset(renderer, 0, sizeof(struct renderer));
  renderer->init_video = soft_init_video;
  renderer->check_video_mode = soft_check_video_mode;
  renderer->set_video_mode = soft_set_video_mode;
  renderer->update_colors = soft_update_colors;
  renderer->resize_screen = resize_screen_standard;
  renderer->get_screen_coords = get_screen_coords_centered;
  renderer->set_screen_coords = set_screen_coords_centered;
  renderer->render_graph = soft_render_graph;
  renderer->render_cursor = soft_render_cursor;
  renderer->render_mouse = soft_render_mouse;
  renderer->sync_screen = soft_sync_screen;
}
