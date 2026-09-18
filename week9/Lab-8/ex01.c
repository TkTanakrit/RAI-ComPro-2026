#include <stdio.h>

double Area(double length, double width);
double Perimeter(double length, double width);
double Volume(double length, double width, double height);

int main() {
    double length, width, height;

    printf("Enter length, width, and height in cm: ");
    scanf("%lf %lf %lf", &length, &width, &height);

    if (length <= 0 || width <= 0 || height <= 0) {
        printf("Error: All dimensions must be greater than 0.\n");
        return 0;
    }

    printf("Base Area: %.2lf\n", Area(length, width));
    printf("Perimeter: %.2lf\n", Perimeter(length, width));
    printf("Volume: %.2lf\n", Volume(length, width, height));

    return 0;
}

double Area(double length, double width) {return length * width;}

double Perimeter(double length, double width) {return 2 * (length + width);}

double Volume(double length, double width, double height) {return length * width * height;}