#include <graphics.h>
#include<conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    bar3d(100,100,200,300,50,60);

    getch();

    closegraph();


    return 0; 
}