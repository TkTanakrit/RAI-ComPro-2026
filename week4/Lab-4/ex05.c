#include <stdio.h>

int main(void)
{
    int num;
    int i;
    long factorial;

    factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %ld\n", num, factorial);
    return (0);
}