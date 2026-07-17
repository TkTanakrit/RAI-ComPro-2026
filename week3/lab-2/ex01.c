#include<stdio.h>
int main()
{
int my_int;
float my_float;
char my_char[20];
printf ("Please enter an integer value : ");
scanf ("%d",&my_int);
printf("You entered %d\n",my_int);

printf ("Please enter a float value: ");
scanf ("%f",&my_float);
printf("You entered %0.1f\n",my_float);

printf ("Please enter a character: ");
scanf ("%s",my_char);
printf("You entered %c\n",my_char[0]);

return 0;
}