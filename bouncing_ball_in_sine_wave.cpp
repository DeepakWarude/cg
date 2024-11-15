#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x = 100;
    float y = 200;
    float angle = 0.0f;
    float amplitude = 50.0f;
    float velocity_x = 2.0f;
    float velocity_angle = 0.05f;

    while (1) {
        cleardevice();


        setcolor(RED);
        fillellipse(x, (int)(200 + amplitude * sin(angle)), 20, 20);

        x += velocity_x;
        angle += velocity_angle;


        if (x > getmaxx() - 20 || x < 20) {
            velocity_x = -velocity_x;
        }

        delay(16);
    }

    closegraph();
    return 0;
}

