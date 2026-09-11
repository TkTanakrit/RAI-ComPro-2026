#include <stdio.h>

int sum_array(int *array, int size)
{
    int sum;
    int *ptr;
    int *end;

    sum = 0;
    ptr = array;
    end = array + size;
    while (ptr < end)
    {
        sum += *ptr;
        ptr++;
    }
    return (sum);
}

int main(void)
{
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };

    printf("The sum of array is: %d\n", sum_array(array, size));
    return (0);
}