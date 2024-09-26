#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    outtext("Hello World"); // prints at current position
    outtextxy(200,200,"Hello world"); // prints at given coordinates

    getch();
    closegraph();
    return 0; 
}