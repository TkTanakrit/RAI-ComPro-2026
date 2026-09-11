#include <stdio.h>

int main() {
    int arr[5];
    int *ptr, *p;
    int i, j, temp;

    printf("Enter 5 integers: ");

    ptr = arr;
    for (i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            p = arr + j;

            if (*p < *(p + 1)) {
                temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

    printf("Sorted descending: ");

    ptr = arr;
    while (ptr < arr + 5) {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}