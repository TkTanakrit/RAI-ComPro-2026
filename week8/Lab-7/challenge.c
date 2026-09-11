#include <stdio.h>

#define SIZE 5

void read_numbers(int *array, int size)
{
    int *ptr;
    int *end;

    ptr = array;
    end = array + size;
    while (ptr < end)
    {
        scanf("%d", ptr);
        ptr++;
    }
}

void swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubble_sort(int *array, int size)
{
    int *ptr;
    int *last;
    int swapped;

    last = array + size - 1;
    while (last > array)
    {
        swapped = 0;
        ptr = array;
        while (ptr < last)
        {
            if (*ptr > *(ptr + 1))
            {
                swap(ptr, ptr + 1);
                swapped = 1;
            }
            ptr++;
        }
        if (!swapped)
            break;
        last--;
    }
}

void print_array(int *array, int size)
{
    int *ptr;
    int *end;

    ptr = array;
    end = array + size;
    while (ptr < end)
    {
        printf("%d", *ptr);
        if (ptr + 1 < end)
            printf(" ");
        ptr++;
    }
    printf("\n");
}

int main(void)
{
    int array[SIZE];

    printf("Enter %d integers: ", SIZE);
    read_numbers(array, SIZE);
    printf("Sorted: ");
    bubble_sort(array, SIZE);
    print_array(array, SIZE);
    return (0);
}