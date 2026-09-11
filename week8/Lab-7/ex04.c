#include <stdio.h>

void print_array(int *array, int size)
{
    int *ptr;
    int *end;

    ptr = array;
    end = array + size;
    while (ptr < end)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}

int main(void)
{
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };

    print_array(array, size);
    return (0);
}