/* $Id$
 * MegaZeux
 *
 * Copyright (C) 1996 Greg Janson
 * Copyright (C) 1998 Matthew D. Williams - dbwilli@scsn.net
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
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

//CHARSET.CPP- The default mzx char set

#include "charset.h"

unsigned char far default_mzx_char_set[]={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x7e,0x81,0xa5,0xa5,0x81,0x81,0xbd,0x99,0x81,0x7e,0x0,0x0,0x0,0x0,
0x7e,0xff,0xdb,0xdb,0xff,0xff,0xc3,0xe7,0xff,0x7e,0x0,0x0,0x0,0x0,0x0,
0x6c,0xde,0xde,0xfe,0xfe,0x7c,0x38,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x10,
0x28,0x5c,0xfe,0x74,0x38,0x10,0x0,0x0,0x0,0x0,0x0,0x30,0x58,0x78,0x38,
0x7e,0xee,0x7e,0x38,0x7c,0xcc,0xce,0x0,0x0,0x0,0x10,0x18,0x2c,0x7e,0xff,
0xff,0x7e,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x3c,
0x3c,0x18,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xe7,0xc3,0xc3,
0xe7,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x3c,0x66,0x42,0x42,0x66,
0x3c,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xe7,0xc3,0xc3,0xe7,0xef,0xe7,0xf7,
0xe7,0xff,0xff,0xff,0x0,0xe,0x11,0x1,0x1,0x3a,0x5c,0xbe,0xfe,0xfe,0x7c,
0x38,0x0,0x0,0x0,0x3c,0x66,0x66,0x66,0x3c,0x18,0x1e,0x1c,0x18,0x1c,0x18,
0x10,0x0,0x0,0x0,0x3f,0x36,0x3c,0x30,0x30,0x30,0x70,0xf0,0xe0,0x0,0x0,
0x0,0x0,0x0,0x7f,0x63,0x7f,0x63,0x63,0x63,0x67,0xe7,0xe6,0xc0,0x0,0x0,
0x0,0x0,0x0,0x18,0xdb,0x3c,0xe7,0x3c,0xdb,0x18,0x0,0x0,0x0,0x0,0x0,
0x0,0x80,0xc0,0xe0,0xf8,0xfe,0xf8,0xe0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,
0x2,0x6,0xe,0x3e,0xfe,0x3e,0xe,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x18,
0x3c,0x7e,0x18,0x18,0x18,0x7e,0x3c,0x18,0x0,0x0,0x0,0xff,0x6,0x6,0x6,
0x6,0x6,0x6,0xff,0x60,0x60,0x60,0x60,0x60,0x60,0x0,0xf9,0xf9,0xf9,0xf9,
0xf9,0xf9,0x0,0x9f,0x9f,0x9f,0x9f,0x9f,0x9f,0x0,0x7c,0xda,0x6e,0x32,0x78,
0xfc,0xfc,0x7c,0x38,0x1c,0xbe,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xdb,
0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x3,0x3,0x6,0xe,0xc,0x18,0x18,
0x30,0x70,0x60,0xc0,0xc0,0x80,0x0,0x0,0x18,0x3c,0x7e,0x18,0x18,0x18,0x18,
0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x3c,
0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xc,0xfe,0xc,0x8,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x60,0xfe,0x60,0x20,0x0,0x0,0x0,
0x0,0x0,0x80,0xc0,0xc0,0x60,0x70,0x30,0x18,0x18,0xc,0xe,0x6,0x3,0x3,
0x1,0x0,0x0,0x0,0x0,0x28,0x6c,0xfe,0x6c,0x28,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x10,0x10,0x38,0x38,0x7c,0x7c,0xfe,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xfe,0x7c,0x7c,0x38,0x38,0x10,0x10,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,
0x3c,0x3c,0x3c,0x18,0x18,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x66,0x66,0x66,
0x24,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6c,0x6c,0xfe,
0x6c,0x6c,0x6c,0xfe,0x6c,0x6c,0x0,0x0,0x0,0x18,0x18,0x7c,0xc6,0xc2,0xc0,
0x7c,0x6,0x86,0xc6,0x7c,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0xc2,0xc6,0xc,
0x18,0x30,0x66,0xc6,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0x6c,0x38,0x76,0xdc,
0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,0x30,0x30,0x30,0x60,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0x18,0x30,0x30,0x30,0x30,0x30,0x18,
0xc,0x0,0x0,0x0,0x0,0x0,0x30,0x18,0xc,0xc,0xc,0xc,0xc,0x18,0x30,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0x3c,0xff,0x3c,0x66,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x7e,0x18,0x18,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x30,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0,
0x2,0x6,0xc,0x18,0x30,0x60,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xce,0xde,0xf6,0xe6,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x18,0x38,
0x78,0x18,0x18,0x18,0x18,0x18,0x7e,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x6,
0xc,0x18,0x30,0x60,0xc6,0xfe,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x6,0x6,
0x3c,0x6,0x6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0xc,0x1c,0x3c,0x6c,0xcc,
0xfe,0xc,0xc,0x1e,0x0,0x0,0x0,0x0,0x0,0xfe,0xc0,0xc0,0xc0,0xfc,0x6,
0x6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x38,0x60,0xc0,0xc0,0xfc,0xc6,0xc6,
0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0xfe,0xc6,0x6,0xc,0x18,0x30,0x30,0x30,
0x30,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,0x7c,0xc6,0xc6,0xc6,0x7c,
0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,0x7e,0x6,0x6,0xc,0x78,0x0,
0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x18,0x18,0x30,0x0,0x0,0x0,
0x0,0x0,0x6,0xc,0x18,0x30,0x60,0x30,0x18,0xc,0x6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7e,0x0,0x0,0x7e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x30,0x18,0xc,0x6,0xc,0x18,0x30,0x60,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xc6,0xc,0x18,0x18,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,
0xc6,0xde,0xde,0xde,0xdc,0xc0,0x7c,0x0,0x0,0x0,0x0,0x0,0x10,0x38,0x6c,
0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,0x66,
0x7c,0x66,0x66,0x66,0xfc,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xc2,0xc0,0xc0,
0xc0,0xc2,0x66,0x3c,0x0,0x0,0x0,0x0,0x0,0xf8,0x6c,0x66,0x66,0x66,0x66,
0x66,0x6c,0xf8,0x0,0x0,0x0,0x0,0x0,0xfe,0x66,0x62,0x68,0x78,0x68,0x62,
0x66,0xfe,0x0,0x0,0x0,0x0,0x0,0xfe,0x66,0x62,0x68,0x78,0x68,0x60,0x60,
0xf0,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xc2,0xc0,0xc0,0xde,0xc6,0x66,0x3a,
0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0xc6,0x0,
0x0,0x0,0x0,0x0,0x3c,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,
0x0,0x0,0x0,0x1e,0xc,0xc,0xc,0xc,0xc,0xcc,0xcc,0x78,0x0,0x0,0x0,
0x0,0x0,0xe6,0x66,0x6c,0x6c,0x78,0x6c,0x6c,0x66,0xe6,0x0,0x0,0x0,0x0,
0x0,0xf0,0x60,0x60,0x60,0x60,0x60,0x62,0x66,0xfe,0x0,0x0,0x0,0x0,0x0,
0xc6,0xee,0xfe,0xfe,0xd6,0xc6,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0xc6,
0xe6,0xf6,0xfe,0xde,0xce,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,
0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x0,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,
0x66,0x7c,0x60,0x60,0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,
0xc6,0xd6,0xde,0x7c,0xc,0xe,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,0x66,0x7c,
0x6c,0x66,0x66,0xe6,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0x60,0x38,0xc,
0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x7e,0x7e,0x5a,0x18,0x18,0x18,0x18,
0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,
0x7c,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x10,
0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xd6,0xd6,0xfe,0x7c,0x6c,0x0,
0x0,0x0,0x0,0x0,0xc6,0xc6,0x6c,0x38,0x38,0x38,0x6c,0xc6,0xc6,0x0,0x0,
0x0,0x0,0x0,0x66,0x66,0x66,0x66,0x3c,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,
0x0,0x0,0xfe,0xc6,0x8c,0x18,0x30,0x60,0xc2,0xc6,0xfe,0x0,0x0,0x0,0x0,
0x0,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3c,0x0,0x0,0x0,0x0,0x0,
0x80,0xc0,0xe0,0x70,0x38,0x1c,0xe,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x3c,
0xc,0xc,0xc,0xc,0xc,0xc,0xc,0x3c,0x0,0x0,0x0,0x10,0x38,0x6c,0xc6,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x30,0x30,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xc,
0x7c,0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,0x0,0xe0,0x60,0x60,0x78,0x6c,0x66,
0x66,0x66,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc0,0xc0,
0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x1c,0xc,0xc,0x3c,0x6c,0xcc,0xcc,0xcc,
0x76,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,
0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0x64,0x60,0xf0,0x60,0x60,0x60,0xf0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xcc,0xcc,0xcc,0x7c,0xc,0xcc,0x78,
0x0,0x0,0x0,0xe0,0x60,0x60,0x6c,0x76,0x66,0x66,0x66,0xe6,0x0,0x0,0x0,
0x0,0x0,0x18,0x18,0x0,0x38,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,
0x0,0x6,0x6,0x0,0xe,0x6,0x6,0x6,0x6,0x66,0x66,0x3c,0x0,0x0,0x0,
0xe0,0x60,0x60,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x0,0x0,0x0,0x0,0x0,0x38,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xec,0xfe,0xd6,0xd6,0xd6,0xc6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xdc,0x66,0x66,0x66,0x66,0x66,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xc6,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdc,0x66,
0x66,0x66,0x7c,0x60,0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xcc,0xcc,
0xcc,0x7c,0xc,0xc,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,0xdc,0x76,0x66,0x60,
0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x70,0x1c,0xc6,
0x7c,0x0,0x0,0x0,0x0,0x0,0x10,0x30,0x30,0xfc,0x30,0x30,0x30,0x36,0x1c,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0x66,0x66,0x66,0x3c,0x18,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xd6,0xd6,0xfe,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0x7e,0x6,0xc,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0xfe,0xcc,0x18,0x30,0x66,0xfe,0x0,0x0,0x0,0x0,0x0,0xe,
0x18,0x18,0x18,0x70,0x18,0x18,0x18,0xe,0x0,0x0,0x0,0x0,0x0,0x18,0x18,
0x18,0x18,0x0,0x18,0x18,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x70,0x18,0x18,
0x18,0xe,0x18,0x18,0x18,0x70,0x0,0x0,0x0,0x0,0x0,0x76,0xdc,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x18,
0x3c,0x7f,0x0,0x0,0x0,0x0,0x0,0x18,0x30,0x30,0x60,0x60,0x60,0x30,0x18,
0xc,0xc,0x6,0x6,0x6,0xc,0x18,0xc,0xc,0x6,0x6,0x6,0xc,0x18,0x30,
0x30,0x60,0x60,0x60,0x30,0x0,0x0,0x0,0x0,0x6,0xf,0x99,0xf0,0x60,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x60,0xf0,0x99,0xf,0x6,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,
0x1,0x3,0x3,0x7,0x7,0xf,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0xff,0x80,0x80,
0xc0,0xc0,0xe0,0xe0,0xf0,0xf8,0xf8,0xfc,0xfc,0xfe,0xfe,0xff,0xff,0x7f,0x7f,
0x3f,0x3f,0x1f,0x1f,0xf,0x7,0x7,0x3,0x3,0x1,0x1,0xff,0xfe,0xfe,0xfc,
0xfc,0xf8,0xf8,0xf0,0xe0,0xe0,0xc0,0xc0,0x80,0x80,0x0,0xf1,0x5b,0x55,0x51,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0x8,0x13,0x16,
0x16,0x16,0x13,0x8,0x7,0x0,0x0,0x0,0x0,0x0,0xe0,0x10,0xc8,0x68,0x8,
0x68,0xc8,0x10,0xe0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x2c,0x4e,0x72,
0x34,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xdb,0xb5,0x72,0x4e,0xad,
0xdb,0x66,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0xc,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,0x30,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5a,0xbd,0x7e,0xbd,0x5a,0xa5,0xa5,0x24,0x0,0x0,0x0,
0x0,0x0,0x3c,0x18,0x18,0x18,0x3c,0x3c,0x7e,0x7e,0x7e,0x3c,0x0,0x0,0x0,
0x3c,0xc2,0xc0,0x0,0x4,0x0,0x0,0x20,0x0,0x3,0x43,0x3c,0x0,0x0,0x38,
0x40,0x80,0x90,0xc0,0xc0,0x3,0x3,0x9,0x1,0x2,0x1c,0x0,0x0,0x0,0x0,
0x3,0x43,0xa1,0x81,0x81,0x85,0xc2,0xc0,0x0,0x0,0x0,0x0,0x0,0xc,0xc,
0x2,0x41,0x85,0xa1,0x82,0x40,0x30,0x30,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0x98,0x3c,0x3c,0x19,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x18,
0x3d,0xbc,0x18,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x0,0x19,0x3c,
0x3c,0x98,0x0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x42,0x18,0x3c,0x3c,
0x18,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e,0x38,0x6,0x39,0x7c,0x7e,
0x7a,0x76,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x7e,0x24,0x7e,0x7e,0x7e,
0x7e,0x0,0x0,0x0,0x0,0x1c,0x3e,0x7f,0x7f,0xff,0x7f,0x79,0x7f,0x7f,0xff,
0x7f,0x7f,0x0,0x0,0x0,0x3,0x3,0x0,0xf,0xf,0x0,0x3f,0x3f,0x0,0xff,
0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x5f,0xdf,0x5f,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5f,0xdf,0x5f,0x0,0x5f,0xdf,0x5f,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x5,0x3a,0x5d,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x0,
0x0,0x2,0x1,0x2,0x3b,0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x0,0x2,
0x1,0x3,0x1,0x3a,0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x5,0x2,0x5,
0x1,0x1,0x3a,0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x4,0xe,0x5,0x1,
0x1,0x3a,0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x14,0xe,0x15,0x1,0x1,
0x3a,0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x0,0x2e,0x11,0x29,0x1,0x3a,
0x5c,0xbe,0xfe,0xfe,0x7c,0x38,0x0,0x0,0x0,0xc6,0xc6,0x38,0x54,0xc6,0xfe,
0xee,0xc6,0x7c,0x38,0x0,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0x7c,0xd6,0xd6,
0xee,0xfe,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x36,0x6c,0xd8,0x6c,0x36,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd8,0x6c,0x36,0x6c,0xd8,0x0,
0x0,0x0,0x0,0x0,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,
0x44,0x11,0x44,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,
0x55,0xaa,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,
0x77,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0xf8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x36,0x36,0x36,0x36,0x36,
0xf6,0x6,0xf6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0xfe,0x6,
0xf6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xf6,0x6,0xfe,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1f,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x18,0x18,0x18,0x18,0x18,0x18,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,
0x18,0x18,0x18,0x18,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x36,0x36,0x36,0x36,0x36,
0x37,0x30,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,
0x30,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xf7,0x0,
0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0xf7,
0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x37,0x30,0x37,0x36,
0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0xff,0x0,0x0,
0x0,0x0,0x0,0x0,0x36,0x36,0x36,0x36,0x36,0xf7,0x0,0xf7,0x36,0x36,0x36,
0x36,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x18,0x18,0x18,0xf8,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
0xf0,0xf0,0xf0,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
0xf,0xf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x7b,0xbf,0xff,0x7b,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x38,0x5c,0xbe,0xfe,0xfe,0x74,0x38,0x0,0x0,0x0,0x0,0x0,
0x0,0xff,0xc4,0xdf,0xd7,0xdd,0xdf,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,
0x14,0x3e,0x6a,0xfe,0xf6,0xbe,0xb6,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x3,0x7,0x1f,0x3f,0x7f,0xff,0x1,0x3,0x7,0x1f,
0x3f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf8,0xfc,
0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x80,0xc0,0xe0,0xf8,0xfc,0xfe,0xff,0x0,0xfc,0x52,0x3f,0x35,0x3f,0x4a,
0xfc,0xb4,0xfc,0x4a,0x3f,0x0,0x0,0x0,0x0,0x38,0x5c,0xfe,0xf6,0xbe,0xfa,
0xfe,0x6c,0x38,0x0,0x0,0x0,0x0,0x0,0x3c,0x7e,0x56,0x56,0x7e,0x6e,0x7e,
0x7e,0x2a,0x0,0x0,0x0,0x0,0x18,0x3e,0x34,0x32,0x18,0x4c,0x26,0x46,0x66,
0x3c,0x0,0x0,0x0,0x10,0x0,0x10,0x28,0x14,0x54,0x4a,0xbd,0x4e,0xb3,0x4e,
0x3c,0x0,0x0,0xff,0x7f,0x3f,0x1f,0x7,0x3,0x1,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x1f,0x7,0x3,
0x1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xf8,0xe0,0xc0,0x80,
0xff,0xfe,0xfc,0xf8,0xe0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x7e,0xff,0xdb,0xdb,0xff,0xff,0xdf,0xe7,0xff,0x7e,0x0,0x0,0x0,0x0,
0x7e,0xff,0xdb,0xdb,0xff,0xff,0xe7,0xe7,0xff,0x7e,0x0,0x0,0x0,0x0,0x7e,
0xff,0xdb,0xdb,0xff,0xff,0xff,0xe7,0xdf,0x7e,0x0,0x0,0x0,0x0,0x7e,0xdb,
0xe7,0xdb,0xdb,0xff,0xff,0xe7,0xdf,0x7e,0x0,0x0,0x0,0x0,0x7e,0xff,0xff,
0xd3,0xff,0xff,0xff,0xef,0xff,0x7e,0x0,0x0,0x0,0x0,0x7e,0xff,0xb5,0xdb,
0xad,0xff,0xff,0xff,0xdf,0x7e,0x0,0x0,0x0,0x0,0x7e,0xff,0x81,0x93,0xff,
0xff,0xdf,0xc7,0xff,0x7e,0x0,0x0,0x0,0x0,0x7e,0xff,0xdb,0xdb,0xff,0xff,
0xe7,0xc3,0xff,0x7e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x2,0x6,0x4,0xc,0x8c,0xd8,0xd8,0x70,0x70,
0x20,0x0,0x0,0x8,0x10,0x30,0x60,0x60,0x20,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x20,0x60,0x60,0x30,0xc,0x6,0x6,0x4,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x4,0x6,0x6,0xc,0x8,0x10 };

unsigned char far ascii_set[]={
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x7e,0x81,0xa5,0x81,0x81,0xbd,0x99,0x81,0x7e,0x0,0x0,0x0,0x0,0x0,
0x7e,0xff,0xdb,0xff,0xff,0xc3,0xe7,0xff,0x7e,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0xfe,0xfe,0xfe,0xfe,0x7c,0x38,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x10,
0x38,0x7c,0xfe,0x7c,0x38,0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x3c,0x3c,
0xe7,0xe7,0xe7,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0x18,0x3c,0x7e,0xff,
0xff,0x7e,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x3c,
0x3c,0x18,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xe7,0xc3,0xc3,
0xe7,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x3c,0x66,0x42,0x42,0x66,
0x3c,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xc3,0x99,0xbd,0xbd,0x99,0xc3,
0xff,0xff,0xff,0xff,0x0,0x0,0x1e,0xe,0x1a,0x32,0x78,0xcc,0xcc,0xcc,0x78,
0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0x66,0x66,0x3c,0x18,0x7e,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x3f,0x33,0x3f,0x30,0x30,0x30,0x70,0xf0,0xe0,0x0,0x0,
0x0,0x0,0x0,0x7f,0x63,0x7f,0x63,0x63,0x63,0x67,0xe7,0xe6,0xc0,0x0,0x0,
0x0,0x0,0x18,0x18,0xdb,0x3c,0xe7,0x3c,0xdb,0x18,0x18,0x0,0x0,0x0,0x0,
0x0,0x80,0xc0,0xe0,0xf8,0xfe,0xf8,0xe0,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,
0x2,0x6,0xe,0x3e,0xfe,0x3e,0xe,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x18,
0x3c,0x7e,0x18,0x18,0x18,0x7e,0x3c,0x18,0x0,0x0,0x0,0x0,0x0,0x66,0x66,
0x66,0x66,0x66,0x66,0x0,0x66,0x66,0x0,0x0,0x0,0x0,0x0,0x7f,0xdb,0xdb,
0xdb,0x7b,0x1b,0x1b,0x1b,0x1b,0x0,0x0,0x0,0x0,0x7c,0xc6,0x60,0x38,0x6c,
0xc6,0xc6,0x6c,0x38,0xc,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xfe,0xfe,0xfe,0x0,0x0,0x0,0x0,0x0,0x18,0x3c,0x7e,0x18,0x18,0x18,
0x7e,0x3c,0x18,0x7e,0x0,0x0,0x0,0x0,0x18,0x3c,0x7e,0x18,0x18,0x18,0x18,
0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x3c,
0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0xc,0xfe,0xc,0x18,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,0x60,0xfe,0x60,0x30,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xc0,0xc0,0xfe,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x28,0x6c,0xfe,0x6c,0x28,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x10,0x38,0x38,0x7c,0x7c,0xfe,0xfe,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xfe,0xfe,0x7c,0x7c,0x38,0x38,0x10,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,
0x3c,0x3c,0x3c,0x18,0x18,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x66,0x66,0x66,
0x24,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6c,0x6c,0xfe,
0x6c,0x6c,0x6c,0xfe,0x6c,0x6c,0x0,0x0,0x0,0x18,0x18,0x7c,0xc6,0xc2,0xc0,
0x7c,0x6,0x86,0xc6,0x7c,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0xc2,0xc6,0xc,
0x18,0x30,0x66,0xc6,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0x6c,0x38,0x76,0xdc,
0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,0x30,0x30,0x30,0x60,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc,0x18,0x30,0x30,0x30,0x30,0x30,0x18,
0xc,0x0,0x0,0x0,0x0,0x0,0x30,0x18,0xc,0xc,0xc,0xc,0xc,0x18,0x30,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0x3c,0xff,0x3c,0x66,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x7e,0x18,0x18,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x30,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0,
0x2,0x6,0xc,0x18,0x30,0x60,0xc0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xce,0xde,0xf6,0xe6,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x18,0x38,
0x78,0x18,0x18,0x18,0x18,0x18,0x7e,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x6,
0xc,0x18,0x30,0x60,0xc6,0xfe,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x6,0x6,
0x3c,0x6,0x6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0xc,0x1c,0x3c,0x6c,0xcc,
0xfe,0xc,0xc,0x1e,0x0,0x0,0x0,0x0,0x0,0xfe,0xc0,0xc0,0xc0,0xfc,0x6,
0x6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x38,0x60,0xc0,0xc0,0xfc,0xc6,0xc6,
0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0xfe,0xc6,0x6,0xc,0x18,0x30,0x30,0x30,
0x30,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,0x7c,0xc6,0xc6,0xc6,0x7c,
0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,0x7e,0x6,0x6,0xc,0x78,0x0,
0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x18,0x0,0x0,0x0,0x18,0x18,0x30,0x0,0x0,0x0,
0x0,0x0,0x6,0xc,0x18,0x30,0x60,0x30,0x18,0xc,0x6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7e,0x0,0x0,0x7e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x30,0x18,0xc,0x6,0xc,0x18,0x30,0x60,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xc6,0xc,0x18,0x18,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,
0xc6,0xde,0xde,0xde,0xdc,0xc0,0x7c,0x0,0x0,0x0,0x0,0x0,0x10,0x38,0x6c,
0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,0x66,
0x7c,0x66,0x66,0x66,0xfc,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xc2,0xc0,0xc0,
0xc0,0xc2,0x66,0x3c,0x0,0x0,0x0,0x0,0x0,0xf8,0x6c,0x66,0x66,0x66,0x66,
0x66,0x6c,0xf8,0x0,0x0,0x0,0x0,0x0,0xfe,0x66,0x62,0x68,0x78,0x68,0x62,
0x66,0xfe,0x0,0x0,0x0,0x0,0x0,0xfe,0x66,0x62,0x68,0x78,0x68,0x60,0x60,
0xf0,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xc2,0xc0,0xc0,0xde,0xc6,0x66,0x3a,
0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0xc6,0x0,
0x0,0x0,0x0,0x0,0x3c,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,
0x0,0x0,0x0,0x1e,0xc,0xc,0xc,0xc,0xc,0xcc,0xcc,0x78,0x0,0x0,0x0,
0x0,0x0,0xe6,0x66,0x6c,0x6c,0x78,0x6c,0x6c,0x66,0xe6,0x0,0x0,0x0,0x0,
0x0,0xf0,0x60,0x60,0x60,0x60,0x60,0x62,0x66,0xfe,0x0,0x0,0x0,0x0,0x0,
0xc6,0xee,0xfe,0xfe,0xd6,0xc6,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0xc6,
0xe6,0xf6,0xfe,0xde,0xce,0xc6,0xc6,0xc6,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,
0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x0,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,
0x66,0x7c,0x60,0x60,0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,
0xc6,0xd6,0xde,0x7c,0xc,0xe,0x0,0x0,0x0,0x0,0xfc,0x66,0x66,0x66,0x7c,
0x6c,0x66,0x66,0xe6,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0x60,0x38,0xc,
0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x7e,0x7e,0x5a,0x18,0x18,0x18,0x18,
0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,
0x7c,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x10,
0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0xd6,0xd6,0xfe,0x7c,0x6c,0x0,
0x0,0x0,0x0,0x0,0xc6,0xc6,0x6c,0x38,0x38,0x38,0x6c,0xc6,0xc6,0x0,0x0,
0x0,0x0,0x0,0x66,0x66,0x66,0x66,0x3c,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,
0x0,0x0,0xfe,0xc6,0x8c,0x18,0x30,0x60,0xc2,0xc6,0xfe,0x0,0x0,0x0,0x0,
0x0,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3c,0x0,0x0,0x0,0x0,0x0,
0x80,0xc0,0xe0,0x70,0x38,0x1c,0xe,0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x3c,
0xc,0xc,0xc,0xc,0xc,0xc,0xc,0x3c,0x0,0x0,0x0,0x10,0x38,0x6c,0xc6,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x30,0x30,0x18,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xc,
0x7c,0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,0x0,0xe0,0x60,0x60,0x78,0x6c,0x66,
0x66,0x66,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xc0,0xc0,
0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x1c,0xc,0xc,0x3c,0x6c,0xcc,0xcc,0xcc,
0x76,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,
0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0x64,0x60,0xf0,0x60,0x60,0x60,0xf0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xcc,0xcc,0xcc,0x7c,0xc,0xcc,0x78,
0x0,0x0,0x0,0xe0,0x60,0x60,0x6c,0x76,0x66,0x66,0x66,0xe6,0x0,0x0,0x0,
0x0,0x0,0x18,0x18,0x0,0x38,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,
0x0,0x6,0x6,0x0,0xe,0x6,0x6,0x6,0x6,0x66,0x66,0x3c,0x0,0x0,0x0,
0xe0,0x60,0x60,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x0,0x0,0x0,0x0,0x0,0x38,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xec,0xfe,0xd6,0xd6,0xd6,0xc6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xdc,0x66,0x66,0x66,0x66,0x66,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,
0xc6,0xc6,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdc,0x66,
0x66,0x66,0x7c,0x60,0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xcc,0xcc,
0xcc,0x7c,0xc,0xc,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,0xdc,0x76,0x66,0x60,
0x60,0xf0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7c,0xc6,0x70,0x1c,0xc6,
0x7c,0x0,0x0,0x0,0x0,0x0,0x10,0x30,0x30,0xfc,0x30,0x30,0x30,0x36,0x1c,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0x66,0x66,0x66,0x3c,0x18,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xc6,0xc6,0xd6,0xd6,0xfe,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc6,0xc6,0xc6,0xc6,0x7e,0x6,0xc,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0xfe,0xcc,0x18,0x30,0x66,0xfe,0x0,0x0,0x0,0x0,0x0,0xe,
0x18,0x18,0x18,0x70,0x18,0x18,0x18,0xe,0x0,0x0,0x0,0x0,0x0,0x18,0x18,
0x18,0x18,0x0,0x18,0x18,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x70,0x18,0x18,
0x18,0xe,0x18,0x18,0x18,0x70,0x0,0x0,0x0,0x0,0x0,0x76,0xdc,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x38,0x6c,
0xc6,0xc6,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x66,0xc2,0xc0,0xc0,0xc2,
0x66,0x3c,0xc,0x6,0x7c,0x0,0x0,0x0,0xcc,0xcc,0x0,0xcc,0xcc,0xcc,0xcc,
0xcc,0x76,0x0,0x0,0x0,0x0,0xc,0x18,0x30,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,
0x7c,0x0,0x0,0x0,0x0,0x10,0x38,0x6c,0x0,0x78,0xc,0x7c,0xcc,0xcc,0x76,
0x0,0x0,0x0,0x0,0x0,0xcc,0xcc,0x0,0x78,0xc,0x7c,0xcc,0xcc,0x76,0x0,
0x0,0x0,0x0,0x60,0x30,0x18,0x0,0x78,0xc,0x7c,0xcc,0xcc,0x76,0x0,0x0,
0x0,0x0,0x38,0x6c,0x38,0x0,0x78,0xc,0x7c,0xcc,0xcc,0x76,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3c,0x66,0x60,0x66,0x3c,0xc,0x6,0x3c,0x0,0x0,0x0,
0x10,0x38,0x6c,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,
0xcc,0xcc,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x0,0x0,0x0,0x0,0x60,0x30,
0x18,0x0,0x7c,0xc6,0xfe,0xc0,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x66,0x66,
0x0,0x38,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x18,0x3c,0x66,0x0,
0x38,0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0x60,0x30,0x18,0x0,0x38,
0x18,0x18,0x18,0x18,0x3c,0x0,0x0,0x0,0x0,0xc6,0xc6,0x10,0x38,0x6c,0xc6,
0xc6,0xfe,0xc6,0xc6,0x0,0x0,0x0,0x38,0x6c,0x38,0x0,0x38,0x6c,0xc6,0xc6,
0xfe,0xc6,0xc6,0x0,0x0,0x0,0x18,0x30,0x60,0x0,0xfe,0x66,0x60,0x7c,0x60,
0x66,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xcc,0x76,0x36,0x7e,0xd8,0xd8,
0x6e,0x0,0x0,0x0,0x0,0x0,0x3e,0x6c,0xcc,0xcc,0xfe,0xcc,0xcc,0xcc,0xce,
0x0,0x0,0x0,0x0,0x10,0x38,0x6c,0x0,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x0,
0x0,0x0,0x0,0x0,0xc6,0xc6,0x0,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x0,0x0,
0x0,0x0,0x60,0x30,0x18,0x0,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x0,0x0,0x0,
0x0,0x30,0x78,0xcc,0x0,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,
0x60,0x30,0x18,0x0,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x0,0x0,0x0,0x0,0x0,
0xc6,0xc6,0x0,0xc6,0xc6,0xc6,0xc6,0x7e,0x6,0xc,0x78,0x0,0x0,0xc6,0xc6,
0x38,0x6c,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x0,0x0,0x0,0x0,0xc6,0xc6,0x0,
0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x18,0x18,0x3c,0x66,
0x60,0x60,0x66,0x3c,0x18,0x18,0x0,0x0,0x0,0x0,0x38,0x6c,0x64,0x60,0xf0,
0x60,0x60,0x60,0xe6,0xfc,0x0,0x0,0x0,0x0,0x0,0x66,0x66,0x3c,0x18,0x7e,
0x18,0x7e,0x18,0x18,0x0,0x0,0x0,0x0,0xf8,0xcc,0xcc,0xf8,0xc4,0xcc,0xde,
0xcc,0xcc,0xc6,0x0,0x0,0x0,0x0,0xe,0x1b,0x18,0x18,0x18,0x7e,0x18,0x18,
0x18,0x18,0xd8,0x70,0x0,0x0,0x18,0x30,0x60,0x0,0x78,0xc,0x7c,0xcc,0xcc,
0x76,0x0,0x0,0x0,0x0,0xc,0x18,0x30,0x0,0x38,0x18,0x18,0x18,0x18,0x3c,
0x0,0x0,0x0,0x0,0x18,0x30,0x60,0x0,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x0,
0x0,0x0,0x0,0x18,0x30,0x60,0x0,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x0,0x0,
0x0,0x0,0x0,0x76,0xdc,0x0,0xdc,0x66,0x66,0x66,0x66,0x66,0x0,0x0,0x0,
0x76,0xdc,0x0,0xc6,0xe6,0xf6,0xfe,0xde,0xce,0xc6,0xc6,0x0,0x0,0x0,0x0,
0x3c,0x6c,0x6c,0x3e,0x0,0x7e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x38,
0x6c,0x6c,0x38,0x0,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,
0x30,0x0,0x30,0x30,0x60,0xc6,0xc6,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xfe,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0xfe,0x6,0x6,0x6,0x0,0x0,0x0,0x0,0x0,0xc0,0xc0,0xc6,0xcc,0xd8,
0x30,0x60,0xdc,0x86,0xc,0x18,0x3e,0x0,0x0,0xc0,0xc0,0xc6,0xcc,0xd8,0x30,
0x66,0xce,0x9e,0x3e,0x6,0x6,0x0,0x0,0x0,0x18,0x18,0x0,0x18,0x18,0x3c,
0x3c,0x3c,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x36,0x6c,0xd8,0x6c,0x36,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xd8,0x6c,0x36,0x6c,0xd8,0x0,
0x0,0x0,0x0,0x0,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11,
0x44,0x11,0x44,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,
0x55,0xaa,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,0x77,0xdd,
0x77,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xf8,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0xf8,0x18,0xf8,0x18,0x18,0x18,0x18,0x18,0x18,0x36,0x36,
0x36,0x36,0x36,0x36,0x36,0xf6,0x36,0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xfe,0x36,0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,0x0,
0x0,0xf8,0x18,0xf8,0x18,0x18,0x18,0x18,0x18,0x18,0x36,0x36,0x36,0x36,0x36,
0xf6,0x6,0xf6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0xfe,0x6,
0xf6,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xf6,0x6,0xfe,
0x0,0x0,0x0,0x0,0x0,0x0,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xfe,0x0,
0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x18,0x18,0x18,0xf8,0x18,0xf8,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1f,0x0,0x0,0x0,0x0,
0x0,0x0,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,
0x18,0x18,0x18,0x18,0x18,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x1f,0x18,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,0x36,0x36,0x36,0x36,
0x36,0x36,0x36,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x37,0x30,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,
0x30,0x37,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xf7,0x0,
0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0xf7,
0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x37,0x30,0x37,0x36,
0x36,0x36,0x36,0x36,0x36,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0xff,0x0,0x0,
0x0,0x0,0x0,0x0,0x36,0x36,0x36,0x36,0x36,0xf7,0x0,0xf7,0x36,0x36,0x36,
0x36,0x36,0x36,0x18,0x18,0x18,0x18,0x18,0xff,0x0,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0xff,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0xff,0x18,0x18,0x18,0x18,0x18,0x18,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x36,0x36,0x36,0x36,0x36,0x36,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,
0x18,0x18,0x18,0x1f,0x18,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x1f,0x18,0x1f,0x18,0x18,0x18,0x18,0x18,0x18,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x3f,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x36,
0x36,0x36,0xff,0x36,0x36,0x36,0x36,0x36,0x36,0x18,0x18,0x18,0x18,0x18,0xff,
0x18,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0xf8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,
0x18,0x18,0x18,0x18,0x18,0x18,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,
0xf0,0xf0,0xf0,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,0xf,
0xf,0xf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xdc,0xd8,0xd8,0xdc,0x76,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7c,0xc6,0xfc,0xc6,0xc6,0xfc,0xc0,0xc0,0x40,0x0,0x0,
0x0,0xfe,0xc6,0xc6,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xfe,0x6c,0x6c,0x6c,0x6c,0x6c,0x6c,0x0,0x0,0x0,0x0,0x0,0xfe,
0xc6,0x60,0x30,0x18,0x30,0x60,0xc6,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x7e,0xd8,0xd8,0xd8,0xd8,0x70,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,
0x66,0x66,0x66,0x7c,0x60,0x60,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xdc,
0x18,0x18,0x18,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x7e,0x18,0x3c,0x66,0x66,
0x66,0x3c,0x18,0x7e,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,
0xc6,0x6c,0x38,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0xc6,0xc6,0xc6,0x6c,0x6c,
0x6c,0xee,0x0,0x0,0x0,0x0,0x0,0x1e,0x30,0x18,0xc,0x3e,0x66,0x66,0x66,
0x3c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7e,0xdb,0xdb,0x7e,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x3,0x6,0x7e,0xdb,0xdb,0xf3,0x7e,0x60,0xc0,0x0,
0x0,0x0,0x0,0x0,0x1c,0x30,0x60,0x60,0x7c,0x60,0x60,0x30,0x1c,0x0,0x0,
0x0,0x0,0x0,0x0,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x0,0x0,0x0,
0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x18,0x18,0x7e,0x18,0x18,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0x0,
0x30,0x18,0xc,0x6,0xc,0x18,0x30,0x0,0x7e,0x0,0x0,0x0,0x0,0x0,0xc,
0x18,0x30,0x60,0x30,0x18,0xc,0x0,0x7e,0x0,0x0,0x0,0x0,0x0,0xe,0x1b,
0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,
0x18,0x18,0x18,0xd8,0xd8,0x70,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,
0x7e,0x0,0x18,0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x76,0xdc,0x0,
0x76,0xdc,0x0,0x0,0x0,0x0,0x0,0x0,0x38,0x6c,0x6c,0x38,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xf,0xc,0xc,0xc,0xc,0xc,0xec,0x6c,0x3c,0x1c,
0x0,0x0,0x0,0x0,0xd8,0x6c,0x6c,0x6c,0x6c,0x6c,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x70,0xd8,0x30,0x60,0xc8,0xf8,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0 };
