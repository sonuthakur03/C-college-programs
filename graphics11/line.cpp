#include <graphics.h>
#include<conio.h>

int main() {
    int gd = DETECT, gm;
        initgraph(&gd,&gm,(char*)"");
        setcolor(RED);
        setlinestyle(0,0,4);
        line(200,300,50,20);
        line(100,100,20,30);
        // line(20,50,20,30);
        getch();
        closegraph();
    return 0;
}