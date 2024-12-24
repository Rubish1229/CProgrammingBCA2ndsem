#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	
	setcolor(WHITE);
	circle(300,200,100);
	
	setcolor(YELLOW);
	outtextxy(270,200,"HELLO BCA");
	
	getch();
	
	closegraph();
	
	return 0;
}
