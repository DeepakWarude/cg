#include <graphics.h>
#include <cmath>
#include <iostream>

using namespace std;

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void translate(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int tx, int ty) {
    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;
    x3 += tx;
    y3 += ty;
}

void scale(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3,int sx, int sy) {
    x1 = x1 * sx;
    y1 = y1 * sy;
    x2 = x2 * sx;
    y2 = y2 * sy;
    x3 = x3 * sx;
    y3 = y3 * sy;
}

void rotate(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, float angle) {
    float rad = angle * (3.14 / 180);
    int tempX1 = x1, tempY1 = y1;
    int tempX2 = x2, tempY2 = y2;
    int tempX3 = x3, tempY3 = y3;

    x1 = static_cast<int>(tempX1 * cos(rad) - tempY1 * sin(rad));
    y1 = static_cast<int>(tempX1 * sin(rad) + tempY1 * cos(rad));
   
    x2 = static_cast<int>(tempX2 * cos(rad) - tempY2 * sin(rad));
    y2 = static_cast<int>(tempX2 * sin(rad) + tempY2 * cos(rad));
   
    x3 = static_cast<int>(tempX3 * cos(rad) - tempY3 * sin(rad));
    y3 = static_cast<int>(tempX3 * sin(rad) + tempY3 * cos(rad));
}

int main() {
    int gd = DETECT, gm;
    char path[] = "";
    initgraph(&gd, &gm,path);

    int x1 = 100, y1 = 100;
    int x2 = 150, y2 = 50;
    int x3 = 200, y3 = 100;

    drawTriangle(x1, y1, x2, y2, x3, y3);

    while (true) {
        int choice;
        cout << "Menu:\n";
        cout << "1. Translate\n";
        cout << "2. Scale\n";
        cout << "3. Rotate\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int tx, ty;
                cout << "Enter translation (tx, ty): ";
                cin >> tx >> ty;
                translate(x1, y1, x2, y2, x3, y3, tx, ty);
                break;
            }
            case 2: {
                int sx, sy;
                cout << "Enter scaling factors (sx, sy): ";
                cin >> sx >> sy;
                scale(x1, y1, x2, y2, x3, y3, sx, sy);
                break;
            }
            case 3: {
                float angle;
                cout << "Enter rotation angle: ";
                cin >> angle;
                rotate(x1, y1, x2, y2, x3, y3, angle);
                break;
            }
            case 4:
                closegraph();
                return 0;
            default:
                cout << "Invalid choice!\n";
                break;
        }

        drawTriangle(x1, y1, x2, y2, x3, y3);
        delay(1000);
    }

    closegraph();
    return 0;
}
#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

// Function to draw a triangle
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    int points[] = {x1, y1, x2, y2, x3, y3, x1, y1}; // Closing the triangle
    drawpoly(4, points);
}

// Function to perform X shear
void xShear(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, float sh) {
    // Shearing in the X direction
    int tempY1 = y1;
    int tempY2 = y2;
    int tempY3 = y3;

    y1 = static_cast<int>(tempY1 + sh * x1);
    y2 = static_cast<int>(tempY2 + sh * x2);
    y3 = static_cast<int>(tempY3 + sh * x3);
}

// Function to perform Y shear
void yShear(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, float sh) {
    // Shearing in the Y direction
    int tempX1 = x1;
    int tempX2 = x2;
    int tempX3 = x3;

    x1 = static_cast<int>(tempX1 + sh * y1);
    x2 = static_cast<int>(tempX2 + sh * y2);
    x3 = static_cast<int>(tempX3 + sh * y3);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Adjust the path as necessary

    // Initial triangle coordinates
    int x1 = 200, y1 = 100;
    int x2 = 300, y2 = 300;
    int x3 = 100, y3 = 300;

    // Draw the original triangle
    drawTriangle(x1, y1, x2, y2, x3, y3);
    delay(2000); // Wait for 2 seconds

    // Perform X shear
    float xShearFactor = 0.5; // Shear factor for X direction
    xShear(x1, y1, x2, y2, x3, y3, xShearFactor);
    cleardevice(); // Clear the screen
    drawTriangle(x1, y1, x2, y2, x3, y3);
    delay(2000); // Wait for 2 seconds

    // Perform Y shear
    float yShearFactor = 0.5; // Shear factor for Y direction
    yShear(x1, y1, x2, y2, x3, y3, yShearFactor);
    cleardevice(); // Clear the screen
    drawTriangle(x1, y1, x2, y2, x3, y3);
    delay(2000); // Wait for 2 seconds

    closegraph();
    return 0;
}

