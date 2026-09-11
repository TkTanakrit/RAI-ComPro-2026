#include <stdio.h>

int main(void)
{
    int test = 0;
    int newtest = 99;

    printf("The address of test variable is at: %p\n", (void *)&test);
    printf("The new value of test via pointer is: %d\n", newtest);
    return (0);
}
