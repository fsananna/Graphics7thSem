#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, nullptr);

    setlinestyle(SOLID_LINE, 0, 3);

    rectangle(200, 100, 350, 400);
    bar(220,120,330,220);


    // 5. Draw Keypad using for loop and bar()
    
    int x_start = 220, y_start = 250, w = 25, h = 20, gap = 17;

    for (int row = 0; row < 4; row++) {  // 4 rows
        for (int col = 0; col < 3; col++) {  // 3 columns
            int x1 = x_start + col * (w + gap);
            int y1 = y_start + row * (h + gap);
            int x2 = x1 + w;
            int y2 = y1 + h;

            bar(x1, y1, x2, y2); // Draw button using bar()
        }
    }

    bar(320,60, 340, 100);

     // Inner wave
    arc(350, 70, 290, 70, 20); 
    arc(350, 70, 290, 70, 10);

    // Outer wave
    arc(310, 70, 100, 260, 20);  
    arc(310, 70, 100, 260, 10);


    getch();
    closegraph();
    return 0;
}