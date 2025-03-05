#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>

void drawRotatedRectangle(int centerX, int centerY, int width, int height, double angle) {
    // Calculate half-width and half-height
    int halfWidth = width / 2;
    int halfHeight = height / 2;

    // Convert angle to radians
    double rad = angle * M_PI / 180.0;

    // Calculate rotated corners
    int x1 = centerX + (-halfWidth * cos(rad) - (-halfHeight) * sin(rad));
    int y1 = centerY + (-halfWidth * sin(rad) + (-halfHeight) * cos(rad));

    int x2 = centerX + (halfWidth * cos(rad) - (-halfHeight) * sin(rad));
    int y2 = centerY + (halfWidth * sin(rad) + (-halfHeight) * cos(rad));

    int x3 = centerX + (halfWidth * cos(rad) - (halfHeight) * sin(rad));
    int y3 = centerY + (halfWidth * sin(rad) + (halfHeight) * cos(rad));

    int x4 = centerX + (-halfWidth * cos(rad) - (halfHeight) * sin(rad));
    int y4 = centerY + (-halfWidth * sin(rad) + (halfHeight) * cos(rad));

    // Draw the rotated rectangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
}

int main() {
    int gd = DETECT, gm;
    int centerX = 320, centerY = 240;
    int width = 100, height = 40;
    int angle = 0;
    int key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();

        // Draw the rotated rectangle
        drawRotatedRectangle(centerX, centerY, width, height, angle);

        // Display instructions
        outtextxy(10, 10, "Rotate: Left/Right Arrow, Quit: Q");

        // Wait for and handle key press
        if (kbhit()) {
            key = getch();

            // Handle extended keys
            if (key == 0 || key == 224) {
                key = getch();
                
                if (key == 75) {  // Left Arrow Key
                    angle -= 10;
                }
                else if (key == 77) {  // Right Arrow Key
                    angle += 10;
                }

                // Normalize angle
                if (angle < 0) angle += 360;
                if (angle >= 360) angle -= 360;
            }
            else if (key == 'Q' || key == 'q') {
                break;  // Quit on 'Q'
            }
        }

        delay(50);  // Prevent excessive CPU usage
    }

    closegraph();
    return 0;
}
/*#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <dos.h>

void drawRotatedTriangle(int centerX, int centerY, int size, double angle) {
    double rad = angle * M_PI / 180.0;

    // Define an equilateral triangle (points relative to center)
    int x1 = centerX + (size * cos(rad));
    int y1 = centerY + (size * sin(rad));

    int x2 = centerX + (size * cos(rad + 2.0 * M_PI / 3));
    int y2 = centerY + (size * sin(rad + 2.0 * M_PI / 3));

    int x3 = centerX + (size * cos(rad - 2.0 * M_PI / 3));
    int y3 = centerY + (size * sin(rad - 2.0 * M_PI / 3));

    // Draw the triangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

int main() {
    int gd = DETECT, gm;
    int centerX = 320, centerY = 240;
    int size = 100;  // Size of the triangle
    int angle = 0;
    int key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();

        // Draw the rotated triangle
        drawRotatedTriangle(centerX, centerY, size, angle);

        // Display instructions
        outtextxy(10, 10, "Rotate: Left/Right Arrow, Quit: Q");

        // Wait for and handle key press
        if (kbhit()) {
            key = getch();

            // Handle extended keys
            if (key == 0 || key == 224) {
                key = getch();
                
                if (key == 75) {  // Left Arrow Key
                    angle -= 10;
                }
                else if (key == 77) {  // Right Arrow Key
                    angle += 10;
                }

                // Normalize angle
                if (angle < 0) angle += 360;
                if (angle >= 360) angle -= 360;
            }
            else if (key == 'Q' || key == 'q') {
                break;  // Quit on 'Q'
            }
        }

        delay(50);  // Prevent excessive CPU usage
    }

    closegraph();
    return 0;
}

//////////////////

void drawRotatedLine(int centerX, int centerY, int length, double angle) {
    double rad = angle * M_PI / 180.0;

    int x1 = centerX + (length / 2) * cos(rad);
    int y1 = centerY + (length / 2) * sin(rad);
    
    int x2 = centerX - (length / 2) * cos(rad);
    int y2 = centerY - (length / 2) * sin(rad);

    setcolor(WHITE);
    line(x1, y1, x2, y2);
}
*/