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

/* Declaration for ERROR.CPP */

#ifndef __ERROR_H
#define __ERROR_H

//Call for an error OR a warning. Type=0 for a warning, 1 for a recoverable
//error, 2 for a fatal error. Options are (bits set in options and returned
//as action) FAIL=1, RETRY=2, EXIT TO DOS=4, OK=8, HELP=16 (OK is for usually
//only for warnings) Code is a specialized error code for debugging purposes.
//Type of 3 for a critical error.

#ifdef __cplusplus

int error(char far *string,char type,char options,int segment,
	unsigned int code=0);
extern "C" int error2(char far *string,char type,char options,int segment,
	unsigned int code=0);

#else

int error2(char far *string,char type,char options,int segment,
	unsigned int code);

#endif

#endif