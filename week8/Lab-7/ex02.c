#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void)
{
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After reverse: a = %d, b = %d\n", a, b);
    return (0);
}