#include <stdio.h>

int sum_array(int *array, int size)
{
    int sum = 0;
    int *ptr = array;
    int *end = array + size;

    while (ptr < end)
    {
        if (*ptr % 2 == 0)
        {
            sum += *ptr;
        }
        ptr++;
    }

    return sum;
}

int main(void)
{
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};

    printf("The sum of even numbers is: %d\n", sum_array(array, size));

    return 0;
}