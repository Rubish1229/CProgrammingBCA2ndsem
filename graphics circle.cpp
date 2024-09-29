#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT, gm;
	
	initgraph(&gd, &gm,"");
	
	//initgraph(graphicsdriver, graphicsmode, path)
	setcolor(WHITE);
	
	circle(300,200,100);
	//cirle(x-cordinate,ycordinate,radius)
	
	setcolor(YELLOW);
	
	outtextxy(270,190,"HELLO BCA");
	
	getch();
	
	closegraph();
	
	return 0;
}
