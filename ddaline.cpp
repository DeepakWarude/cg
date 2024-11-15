#include <iostream>
#include <graphics.h>
#include <cmath> // For abs() and round()
using namespace std;

void dda(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    float steps = max(abs(dx), abs(dy)); // Use absolute values for dx and dy

    float xinc = (float)dx / steps; // Increment in x for each step
    float yinc = (float)dy / steps; // Increment in y for each step

    float x = x1;
    float y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE); // Round the values before plotting
        x += xinc;
        y += yinc;
    }
}

void drawCircle(int xc, int yc, int r) { // Renamed circle to drawCircle
    int x = 0;
    int y = r;
    int d = 3 - 2 * r;

    while (x <= y) {
        // Plot all eight symmetry points
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        x++;
        if (d < 0) {
            d = d + 4 * x + 6;
        } else {
            y--;
            d = d + 4 * (x - y) + 10;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Draw two concentric circles
    drawCircle(250, 250, 50);
    drawCircle(250, 250, 100);

    // Draw a triangle using DDA
    dda(165, 300, 335, 300); // Base of the triangle
    dda(165, 300, 250, 150); // Left side
    dda(250, 150, 335, 300); // Right side

    getch(); // Wait for user input before closing
    closegraph(); // Close the graphics mode

    return 0;
}

