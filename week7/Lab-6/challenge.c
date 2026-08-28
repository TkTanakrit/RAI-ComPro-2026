#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int id;
    int Math;
    int English;
    int Science;
    int History;
    float avgstd;
};

int main() {
    struct Student students[3];

    float avgmath, avgeng, avgsci, avghis;
    int highest = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);

        scanf("%s", students[i].name);
        scanf("%d", &students[i].id);
        scanf("%d", &students[i].Math);
        scanf("%d", &students[i].English);
        scanf("%d", &students[i].Science);
        scanf("%d", &students[i].History);

        students[i].avgstd =
            (students[i].Math +
             students[i].English +
             students[i].Science +
             students[i].History) / 4.0;
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n",
               students[i].name,
               students[i].id,
               students[i].avgstd);
    }

    for (int i = 1; i < 3; i++) {
        if (students[i].avgstd > students[highest].avgstd) {
            highest = i;
        }
    }

    printf("\nTop Student: %s with %.2f\n",
           students[highest].name,
           students[highest].avgstd);

    avgmath = (students[0].Math + students[1].Math + students[2].Math) / 3.0;
    avgeng  = (students[0].English + students[1].English + students[2].English) / 3.0;
    avgsci  = (students[0].Science + students[1].Science + students[2].Science) / 3.0;
    avghis  = (students[0].History + students[1].History + students[2].History) / 3.0;

    printf("\nSubject Averages:\n");
    printf("Math: %.2f\n", avgmath);
    printf("English: %.2f\n", avgeng);
    printf("Science: %.2f\n", avgsci);
    printf("History: %.2f\n", avghis);

    float topAvg = avgmath;
    char topSubject[20] = "Math";

    if (avgeng > topAvg) {
        topAvg = avgeng;
        strcpy(topSubject, "English");
    }

    if (avgsci > topAvg) {
        topAvg = avgsci;
        strcpy(topSubject, "Science");
    }

    if (avghis > topAvg) {
        topAvg = avghis;
        strcpy(topSubject, "History");
    }

    printf("\nTop Subject: %s with average %.2f\n",
           topSubject, topAvg);

    return 0;
}