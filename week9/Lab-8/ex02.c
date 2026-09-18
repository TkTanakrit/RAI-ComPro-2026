#include <stdio.h>

int isPalindrome(int num)
{
    int original = num;
    int reverse = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    return (original == reverse);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayPalindrome(int start, int end)
{
    int count = 0;
    int sum = 0;

    printf("The palindrome numbers within the interval [%d, %d] are:\n",
           start, end);

    for (int i = start; i <= end; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n");
    printf("Total palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %d\n", sum);
}

int main()
{
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        swap(&start, &end);
    }

    displayPalindrome(start, end);

    return 0;
}