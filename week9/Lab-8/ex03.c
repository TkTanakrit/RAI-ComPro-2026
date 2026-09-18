#include <stdio.h>

int sumOddSquares(int start, int end);

int main() {
    int start, end;

    printf("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);

    int sum = sumOddSquares(start, end);

    printf("Sum of squares of odd numbers from %d to %d is %d\n", start, end, sum);

    return 0;
}

int sumOddSquares(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i * i;
        }
    }

    return sum;
}