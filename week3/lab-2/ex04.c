#include<stdio.h>
int main()
{
    char username[99];
    int id;
    float proscore, physcore, calcscore, gpa;

    printf("Enter your Name: ");
    scanf("%[^\n]", username);
    printf("Enter your student ID: ");
    scanf(" %d", &id);
    printf("Enter your Programming score: ");
    scanf(" %f", &proscore);
    printf("Enter your Physics score: ");
    scanf(" %f", &physcore);
    printf("Enter your Calculus score: ");
    scanf(" %f", &calcscore);

    gpa = (proscore+physcore+calcscore)/3;

    printf("Hi %s (%d)! Your GPA is %.2f \n", username, id, gpa);

    return 0;
}
