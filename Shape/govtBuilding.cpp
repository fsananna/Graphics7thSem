#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);
    
    // Get screen dimensions
    int maxX = getmaxx();
    int maxY = getmaxy();
    
    // Adjust building dimensions to fit screen
    int buildingWidth = maxX * 0.6;  // 60% of screen width
    int buildingHeight = maxY * 0.4; // 40% of screen height
    int flagpoleHeight = buildingHeight * 0.4;
    
    // Base position (center of screen, but a bit higher)
    int centerX = maxX / 2;
    int baseY = maxY / 2 - (buildingHeight / 4);  // Move up slightly
    
    // Calculate left and right positions
    int leftX = centerX - buildingWidth/2;
    int rightX = centerX + buildingWidth/2;
    
    // Flag dimensions
    int flagWidth = buildingWidth * 0.1;
    int flagHeight = flagpoleHeight * 0.25;
    
    // Draw main building outline
    setcolor(WHITE);
    
    // Bottom part of the building with columns
    rectangle(leftX, baseY, rightX, baseY + buildingHeight);
    
    // Draw horizontal bar above columns
    rectangle(leftX, baseY, rightX, baseY + 30);
    
    // Draw triangular roof structure
    int roofWidth = buildingWidth * 0.5;
    int roofHeight = buildingHeight * 0.2;
    line(centerX - (roofWidth/2), baseY, centerX, baseY - roofHeight);  // Left roof line
    line(centerX, baseY - roofHeight, centerX + (roofWidth/2), baseY);  // Right roof line
    line(centerX - (roofWidth/2), baseY, centerX + (roofWidth/2), baseY);  // Bottom roof line
    
    // Draw flagpole
    line(centerX, baseY - roofHeight, centerX, baseY - roofHeight - flagpoleHeight);
    
    // Draw flag
    rectangle(centerX, baseY - roofHeight - flagpoleHeight, 
              centerX + flagWidth, baseY - roofHeight - flagpoleHeight + flagHeight);
    
    // Calculate proper column dimensions to fit inside building
    int numColumns = 7;
    int totalColumnsWidth = buildingWidth * 0.8;  // Columns take 80% of building width
    int columnWidth = totalColumnsWidth / numColumns * 0.6;  // Each column takes 60% of its allocated space
    int columnSpacing = (totalColumnsWidth - (columnWidth * numColumns)) / (numColumns - 1);
    int columnStartX = leftX + (buildingWidth - totalColumnsWidth) / 2;
    
    for (int i = 0; i < numColumns; i++) {
        int colX = columnStartX + i * (columnWidth + columnSpacing);
        
        // Upper small window of column
        rectangle(colX, baseY + 50, colX + columnWidth, baseY + 80);
        
        // Main column
        rectangle(colX, baseY + 100, colX + columnWidth, baseY + buildingHeight - 20);
    }
    
    getch();
    closegraph();
    return 0;
}