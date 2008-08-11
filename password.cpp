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

/* Code to save and retrieve password info from an open file and to
	derive an xor code from the current password. */

/* Also contains password checking and changing code/dialogs. */

#include "helpsys.h"
#include "graphics.h"
#include "error.h"
#include "data.h"
#include "password.h"
#include <stdio.h>
#include "string.h"
#include "window.h"
#include "intake.h"

/* Note that all comparisons between stored and entered passwords should
	not be case sensitive. The stored version can have any mixture of
	upper and lower- it won't affect the comparison any. It WILL affect the
	XOR code, but since the upper/lower is saved also it doesn't matter. */

char far magic_code[16]="�R��mMJ�����ޑ$";
char far work_area[16];

//Write password info to an open file
void write_password(FILE *fp) {
	int t1;
	//First write code for protection mode
	fputc(protection_method,fp);
	//If it was 0, we're done!
	if(!protection_method) return;
	//Otherwise, let's fiddle with the 15 byte password and output
	str_cpy(work_area,magic_code);
	for(t1=0;t1<15;t1++)
		work_area[t1]^=(password[t1]^0x8D)+0x12+protection_method;
	fwrite(work_area,1,15,fp);
	//Done!
}

//Read password info from an open file
void read_password(FILE *fp) {
	int t1;
	//First get code for protection mode
	protection_method=fgetc(fp);
	//If it was 0, we're done!
	if(!protection_method) {
		password[0]=0;
		return;
		}
	//Otherwise, let's read the 15 byte code and fiddle for the password
	fread(work_area,1,15,fp);
	for(t1=0;t1<15;t1++) {
		work_area[t1]^=magic_code[t1];
		work_area[t1]-=0x12+protection_method;
		work_area[t1]^=0x8D;
		}
	str_cpy(password,work_area);
	//Done!
}

//Get xor code for the current password
unsigned char get_pw_xor_code(void) {
	int work=85;//Start with 85... (01010101)
	int t1;
	if(protection_method==0) return 0;
	//Clear pw after first null
	for(t1=str_len(password);t1<16;t1++)
		password[t1]=0;
	for(t1=0;t1<15;t1++) {
		//For each byte, roll once to the left and xor in pw byte if it
		//is an odd character, or add in pw byte if it is an even character.
		work<<=1;
		if(work>255) work^=257;//Wraparound from roll
		if(t1&1) {
			work+=password[t1];//Add (even byte)
			if(work>255) work^=257;//Wraparound from add
			}
		else work^=password[t1];//XOR (odd byte);
		}
	//To factor in protection method, add it in and roll one last time
	work+=protection_method;
	if(work>255) work^=257;
	work<<=1;
	if(work>255) work^=257;
	//Can't be 0-
	if(work==0) work=86;//(01010110)
	//Done!
	return (unsigned char)work;
}

//Checks an inputted password against the current password. Gives error
//and returns non-0 if wrong.
char check_pw(void) {
	char temp[16]="";
	if(protection_method==0) return 0;
	if(password[0]==0) return 0;
	set_context(95);
retry:
	save_screen(current_pg_seg);
	draw_window_box(16,12,44,14,current_pg_seg,143,128,135);
	write_string("Password:",18,13,143,current_pg_seg);
	if(intake(temp,15,28,13,current_pg_seg,142,1,0,1)==27) {
			restore_screen(current_pg_seg);
			pop_context();
			return -1;
			}
	restore_screen(current_pg_seg);
	if(str_cmp(temp,password)) {
		//Error
		if(error("Invalid password",0,26,current_pg_seg,0x1001)==2)
			goto retry;//Chose RETRY.
		pop_context();
		return -1;
		}
	//Correct.
	pop_context();
	return 0;
}

//After checking password if one is present, we allow editing of the
//password and protection method.

//--------------------------------------
//
// ( ) No protection
// ( ) No-save protection (anti-ripoff)
// ( ) No-edit protection
// ( ) No-play protection
//
// Password: ***************_
//
//      _OK_           _Cancel_
//
//--------------------------------------
char pdi_types[4]={ DE_RADIO,DE_INPUT,DE_BUTTON,DE_BUTTON };
char pdi_xs[4]={ 2,2,7,20 };
char pdi_ys[4]={ 2,7,9,9 };
char far *pdi_strs[4]={ "No protection\nNo-save protection (anti-ripoff)\n\
No-edit protection\nNo-play protection","Password: ","OK","Cancel" };
int pdi_p1s[4]={ 4,15,0,-1 };
int pdi_p2s[2]={ 32,0 };
void far *pdi_storage[2]={ NULL,NULL };

dialog pdi={
	20,5,59,16,"Password protection",4,
	pdi_types,
	pdi_xs,
	pdi_ys,
	pdi_strs,
	pdi_p1s,
	pdi_p2s,
	pdi_storage,0 };

void password_dialog(void) {
	int p_m=protection_method;
	char temp[16];
	if(check_pw()) return;

	set_context(95);

	pdi_storage[0]=&p_m;
	pdi_storage[1]=temp;
	str_cpy(temp,password);

	if(run_dialog(&pdi,current_pg_seg)) {
		pop_context();
		return;//No changy
		}
	if(temp[0]==0) p_m=NO_PROTECTION;//No protection w/o a password!

	str_cpy(password,temp);
	protection_method=p_m;
	pop_context();
	return;
}