#include <stdio.h>
struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student students[3];
    int highest = 0;

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);

        if (students[i].score > students[highest].score) {
            highest = i;
        }
    }

    printf("\nThe highest scores belongs to %s at %.1f scores!\n", students[highest].name, students[highest].score);
    return 0;
}
