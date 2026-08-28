#include <stdio.h>
struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\nStored Student Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].score);
    }

    return 0;
}