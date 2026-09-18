#include <stdio.h>

int sumEvenIndex(int arr[], int n);
int sumOddIndex(int arr[], int n);

int main()
{
    int n;
    
    printf("N: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int evenSum = sumEvenIndex(arr, n);
    int oddSum = sumOddIndex(arr, n);

    int evenCount = (n + 1) / 2;
    int oddCount = n / 2;

    double evenAvg = (double)evenSum / evenCount;
    double oddAvg = 0.0;

    if(oddCount > 0)
        oddAvg = (double)oddSum / oddCount;

    printf("Output:\n");
    printf("Even index elements -> Sum: %d, Average: %.2f\n", evenSum, evenAvg);
    printf("Odd index elements -> Sum: %d, Average: %.2f\n", oddSum, oddAvg);

    return 0;
}

int sumEvenIndex(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i += 2)
    {
        sum += arr[i];
    }

    return sum;
}

int sumOddIndex(int arr[], int n)
{
    int sum = 0;

    for(int i = 1; i < n; i += 2)
    {
        sum += arr[i];
    }

    return sum;
}