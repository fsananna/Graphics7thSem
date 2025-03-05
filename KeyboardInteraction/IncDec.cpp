/*Write a program to draw a circle and when press ‘i’ on the keyboard the radius of the circle increases by 15 pixel and when press ‘d’ decreases by 15 pixel.*/
#include <graphics.h>
#include <conio.h>

int main() {
    int gdriver = DETECT, gmode;
    int x = 320, y = 240, radius = 50;  // Circle initial position and radius
    char key;

    initgraph(&gdriver, &gmode, "C:\\TC\\BGI"); // Initialize graphics mode

    while (1) {  // Infinite loop to keep updating the circle
        cleardevice();  // Clear previous frame
        circle(x, y, radius);  // Draw circle at (x, y) with given radius
        outtextxy(10, 10, "Press 'i' to increase, 'd' to decrease, 'q' to quit");

        key = getch(); // Get user input

        if (key == 'i' || key == 'I') {
            radius += 15;  // Increase radius
        } 
        else if (key == 'd' || key == 'D') {
            if (radius > 15)  // Prevent radius from becoming negative
                radius -= 15;
        } 
        else if (key == 'q' || key == 'Q') {
            break;  // Exit loop when 'q' is pressed
        }
    }

    closegraph(); // Close graphics mode
    return 0;
}
