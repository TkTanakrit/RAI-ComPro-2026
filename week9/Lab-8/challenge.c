#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

float calculateAverage(struct Student students[], int n);
int findHighest(struct Student students[], int n);
int findLowest(struct Student students[], int n);
char getLetterGrade(int grade);

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade of %s: ", students[i].name);
        scanf("%d", &students[i].grade);
    }

    float average = calculateAverage(students, n);
    int highestIndex = findHighest(students, n);
    int lowestIndex = findLowest(students, n);

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", average);

    printf("Highest grade: %d (%s)\n", students[highestIndex].grade, students[highestIndex].name);

    printf("Lowest grade: %d (%s)\n", students[lowestIndex].grade, students[lowestIndex].name);

    printf("Students who passed:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].grade >= 60) {
            printf("%s - Grade %c\n", students[i].name, getLetterGrade(students[i].grade));
        }
    }

    return 0;
}

float calculateAverage(struct Student students[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
    }

    return (float)sum / n;
}

int findHighest(struct Student students[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].grade > students[maxIndex].grade) {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int findLowest(struct Student students[], int n) {
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].grade < students[minIndex].grade) {
            minIndex = i;
        }
    }

    return minIndex;
}

char getLetterGrade(int grade) {
    if (grade >= 80)
        return 'A';
    else if (grade >= 70)
        return 'B';
    else
        return 'C';
}