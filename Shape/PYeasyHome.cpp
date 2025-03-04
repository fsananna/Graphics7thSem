
#include <iostream>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);

    // House Body
    rectangle(150, 200, 350, 350);

    // Roof Overhang
    rectangle(120, 180, 380, 200);

    // Small Rooftop Section
    rectangle(200, 130, 300, 180);

    // Windows
    rectangle(170, 230, 210, 270);
    rectangle(290, 230, 330, 270);

    // Door
    rectangle(230, 270, 270, 350);
    getch();  // Wait for key press
    closegraph();
    return 0;
}
