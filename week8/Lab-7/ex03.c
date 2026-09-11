#include <stdio.h>

int find_max(int *array, int size)
{
    int max;
    int *ptr;
    int *end;

    max = *array;
    ptr = array + 1;
    end = array + size;
    while (ptr < end)
    {
        if (*ptr > max)
            max = *ptr;
        ptr++;
    }
    return (max);
}

int main(void)
{
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("Max value: %d\n", find_max(array, size));
    return (0);
}