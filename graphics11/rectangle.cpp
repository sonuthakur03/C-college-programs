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

    // setfillstyle(SOLID_FILL, YELLOW); // Set fill style and color
    // floodfill((left + right) / 2, (top + bottom) / 2, WHITE); // Fill the rectangle

    getch();

    closegraph();
    return 0;
}
