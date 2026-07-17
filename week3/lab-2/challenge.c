#include<stdio.h>
int main()
{
    char username[99];
    int first, second, third, sum, min, max;
    float avg, f, s, t;
    printf("Enter integer ");
    scanf(" %d", &first);
    printf("Enter integer ");
    scanf(" %d", &second);
    printf("Enter integer ");
    scanf(" %d", &third);
    sum = first+second+third;
    f = first;
    s = second;
    t = third;
    avg = (f+s+t)/3;

    if (first < third, first < second){
        min = first;
    }
    if (second < third, second < first){
        min = second;
    }
    if (third < first, third < second){
        min = third;
    }


    if (first > third, first > second){
        max = first;
    }
    if (second > third, second > first){
        max = second;
    }
    if (third > first, third > second){
        max = third;
    }

    printf("Results: \n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);


    return 0;
}
