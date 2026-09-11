#include <stdio.h>

void print_array(int *array, int size)
{
    int *ptr;

    ptr = array + size - 1;

    while (ptr >= array)
    {
        printf("%d\n", *ptr);
        ptr--;
    }
}

int main(void)
{
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};

    print_array(array, size);

    return 0;
}