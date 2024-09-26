#include <graphics.h>
#include<conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    arc(100,200,90,180,60);

    getch();

    closegraph();


    return 0; 
}