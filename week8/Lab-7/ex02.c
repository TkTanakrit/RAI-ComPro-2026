#include <stdio.h>

void swap(int *x, int *y, int *z)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Before reverse: a = %d, b = %d, c = %d\n", a, b, c);
    swap(&a, &b, &c);
    printf("After reverse: a = %d, b = %d, c = %d\n", a, c, b);
    return (0);
}