#include <graphics.h>
#include <conio.h>  

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)""); 

    int left = 100;   
    int top = 100;    
    int right = 300; 
    int bottom = 200; 

    rectangle(left, top, right, bottom);

    getch();

    closegraph();
    return 0;
}
