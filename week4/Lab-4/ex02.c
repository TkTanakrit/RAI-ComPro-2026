#include <stdio.h>

int main(void)
{
    int i;
    int num;
    int sum;

    i = 1;
    sum = 0;
    while (i <= 10)
    {
        printf("%d.Enter the number: ", i);
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
    printf("Total sum is %d\n", sum);
    return (0);
}