#include<stdio.h>
int main()
{
    int age;
    float height;
    char firstname[50];
    char lastname [50];
    char uniname [50];

    printf("Enter your full name: ");
    scanf("%s %s",firstname,lastname);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your university name: "); 
    scanf(" %[^\n]", uniname);
    printf("\nHi! Everyone. This is %c.%s from %s. I am %d years old\n",lastname[0], firstname, uniname, age);
    printf("and my height is\n");
    printf("%0.1f cm tall",height);
}