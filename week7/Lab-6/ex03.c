#include <stdio.h>
#include <math.h>

struct coordinates {
    float x1;
    float y1;
    float x2;
    float y2;
    float distance;
};

int main() {
    struct coordinates point;

    printf("x1: ");
    scanf("%f", &point.x1);

    printf("y1: ");
    scanf("%f", &point.y1);

    printf("x2: ");
    scanf("%f", &point.x2);

    printf("y2: ");
    scanf("%f", &point.y2);

    point.distance = sqrt(
        (point.x2 - point.x1) * (point.x2 - point.x1) + (point.y2 - point.y1) * (point.y2 - point.y1)
    );

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           point.x1, point.y1,
           point.x2, point.y2,
           point.distance);

    return 0;
}