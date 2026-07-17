#include <stdio.h>
int main ( ) 
{
int a = 10,b=5;
float F = 5.4556;
char grade = 'A';
char subject[12] = "Programming";

printf("int = %d, %d\n",a,b);
printf("float = %0.2f\n",F);
printf("char = %c\n",grade);
printf("string = %s\n",subject);

printf("%c\n",subject[1]);
printf("ASCII %c\n",116);

return 0;
 }