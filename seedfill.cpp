#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

void floodfill(int x, int y, int fillcolor, int bordercolor){
	int currentcolor = getpixel(x,y);
	if(currentcolor != bordercolor && currentcolor != fillcolor){
		putpixel(x , y, fillcolor);
		floodfill(x+1, y, fillcolor, bordercolor);
		floodfill(x-1, y, fillcolor, bordercolor);
		floodfill(x, y+1, fillcolor, bordercolor);
		floodfill(x, y-1, fillcolor, bordercolor);
	}
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	
	int points[] = {200, 100, 300, 200, 250, 300, 150, 300, 100, 200, 200, 100};
	
	drawpoly(6, points);
	
	int fillcolor = RED;
	int bordercolor = WHITE;
	
	floodfill(150,200, fillcolor, bordercolor);
	
	getch();
	closegraph();
	
	return 0;
}


