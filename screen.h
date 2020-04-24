

#define ESC 0X1B 
enum FG{BLACK=30,RED,GREEN,YELLOW,BLUE,MAGENTA,CYAN,WHITE};
#define bg(c)  (c+10)




#define UNICODE
#define BAR "\u2590"

void erasescreen(void);
void setfgcolor(int);
void setbgcolor(int);
void setcolors(int, int);
void resetscreen(void);
void gotoxy(int ,int);
void drawbar(int ,int);
