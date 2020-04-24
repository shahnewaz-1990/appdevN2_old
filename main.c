#include <stdio.h>
#include <unistd.h>
#include"screen.h"
int main(){

	
	printf("Press any key to continue\n");
	getchar();
	int ff,bb;
	for(int i=1; i<25; i++){
		ff = (i+1)%8+BLACK;
		bb = (i+2)%8+BLACK;
		erasescreen();
		//setcolors(GREEN, bg(bb));
		setcolors(GREEN, bg(BLACK));
		gotoxy(25-i,((i-1)*4+1)/2);
		printf("HELLO\n");
		//setcolors(RED, bg(bb));
		setcolors(RED,bg(BLACK));
		gotoxy(i,((i-1)*4+1)/2);
        printf("%s\n",BAR);
		sleep(1);

	}

	for (int i=1; i<25; i++){
        ff = (i+1)%8+BLACK;
        bb = (i+2)%8+BLACK;
		erasescreen();
		//setcolors(YELLOW, bg(bb));
		setcolors(GREEN,bg(BLACK));
        gotoxy(i,(i*4+81)/2);
        printf("HELLO\n");
		//setcolors(RED, bg(bb));
		setcolors(RED,bg(BLACK));
        gotoxy(25-i,(i*4+81)/2);
        printf("%s\n",BAR);
        sleep(1);

    }

	getchar();
	resetscreen();
	erasescreen();
	printf("color is set back to default\n");
	getchar();
/*
	setfgcolor(GREEN);
	gotoxy(14,35);
	printf("Hello, World!\n");
	getchar();
	drawbar(30,30);
	drawbar(50,30);
	getchar();
	resetscreen();
	printf("This is default color\n");
*/

}
