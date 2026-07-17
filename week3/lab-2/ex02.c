#include <stdio.h>

int main (){
    int tot, hr, min;
    printf("Enter total minutes: ");
    scanf("%d", &tot);
    hr = tot/60;
    min = tot%60;
    printf("%d Minutes is  %d hour(s) and %d minute(s) \n", tot, hr, min);
    return 0;
}
