//1st remote class
#include<stdio.h>
#include"screen.h"
void setfgcolor(int fg) {
	printf("%c[1;%dm",ESC, fg);
}

void erasescreen(void){
	printf("%c[2J",ESC);
}

void resetscreen(void){
	printf("%c[0m",ESC);
}

//2nd remote class
void gotoxy(int row, int col){
	printf("%c[%d;%dH",ESC, row, col);
}

void drawbar(int col,int height){
	int i;
	for(i=1;i<=height;i++){
	gotoxy(i, col);
#ifdef UNICODE
	printf("%s", BAR);
#else
	printf("%c",'#');
#endif
	}
}

//3rd remote class
void setbgcolor(int bg){
	printf("%c[1;%dm",ESC, bg);
}

void setcolors(int fg, int bg){
	setfgcolor(fg);
	setbgcolor(bg);
}
