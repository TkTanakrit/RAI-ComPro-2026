#include <stdio.h>

struct Vector {
    float u_x;
    float u_y;
    float v_x;
    float v_y;
    float i;
    float j;
};

int main() {
    struct Vector point;

    printf("u_x: ");
    scanf("%f", &point.u_x);

    printf("u_y: ");
    scanf("%f", &point.u_y);

    printf("v_x: ");
    scanf("%f", &point.v_x);

    printf("v_y: ");
    scanf("%f", &point.v_y);

    point.i = point.u_x + point.v_x;
    point.j = point.u_y + point.v_y;

    printf("Resultant vector is equivalent to %.1fi + %.1fj\n",
           point.i, point.j);

    return 0;
}