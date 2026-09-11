#include <stdio.h>

int findmax(int *array, int size);
int findmin(int *array, int size);

int findmax(int *array, int size)
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

    return max;
}

int findmin(int *array, int size)
{
    int min;
    int *ptr;
    int *end;

    min = *array;
    ptr = array + 1;
    end = array + size;

    while (ptr < end)
    {
        if (*ptr < min)
            min = *ptr;
        ptr++;
    }

    return min;
}

int main(void)
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Max value: %d\n", findmax(array, size));
    printf("Min value: %d\n", findmin(array, size));

    return 0;
}