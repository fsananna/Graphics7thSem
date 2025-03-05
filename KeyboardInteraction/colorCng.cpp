#include <graphics.h>  // Include graphics library
#include <conio.h>     // Include console input-output library

int main() {
    int gd = DETECT, gm;  // Auto-detect graphics mode
    int colorIndex = 1;   // Initial color index
    char key;             // Variable to store user input
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setbkcolor(WHITE);  // Set the background color to white
    cleardevice();      // Apply the background color change

    while (1) {  // Infinite loop to keep updating the graphics
        cleardevice();  // Clear the screen before redrawing
        setlinestyle(SOLID_LINE, 0, 3);  // Make lines bold (thickness 3)
        //setlinestyle(int linestyle, unsigned pattern, int thickness);

        setcolor(colorIndex);  // Set the current color for drawing
        
        circle(200, 200, 50);  // Draw a circle at (200,200) with radius 50

        // Display instructions at position (10,10)
        setcolor(BLACK);  // Ensure text is visible on a white background
        outtextxy(10, 10, "Press 'c' to change color, 'q' to quit");

        key = getch();  // Wait for user key input

        if (key == 'c')  
            colorIndex = (colorIndex % 15) + 1;  // Change color cyclically between 1-15
        else if (key == 'q')  
            break;  // Exit the loop when 'q' is pressed
    }

    closegraph();  // Close the graphics window
    return 0;  // End of the program
}
