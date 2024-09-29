#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT, gm;
	
	initgraph(&gd, &gm,"");
	
	//initgraph(graphicsdriver, graphicsmode, path)
	setcolor(WHITE);
	
	rectangle(150,150,300,150);
	//rectangle(top,down,right,left)
	setcolor(YELLOW);
	
	outtextxy(200,140,"Rubish Karmacharya");
	
	getch();
	
	closegraph();
	
	return 0;
}
