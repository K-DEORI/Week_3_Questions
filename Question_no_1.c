#include <stdio.h>

int main() {
    int MARKS[20][5];
    int i, j;
    float subject_avg[5] = {0}, student_avg[20] = {0};
    int below50 = 0;

    printf("Enter marks of 20 students in 5 subjects:\n");
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &MARKS[i][j]);
        }
    }

    for (j = 0; j < 5; j++) {
        for (i = 0; i < 20; i++)
            subject_avg[j] += MARKS[i][j];
        subject_avg[j] /= 20.0;
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 5; j++)
            student_avg[i] += MARKS[i][j];
        student_avg[i] /= 5.0;
        if (student_avg[i] < 50)
            below50++;
    }
    
    printf("\nAverage marks per subject:\n");
    for (j = 0; j < 5; j++)
        printf("Subject %d: %.2f\n", j + 1, subject_avg[j]);

    printf("\nAverage marks per student:\n");
    for (i = 0; i < 20; i++)
        printf("Student %d: %.2f\n", i + 1, student_avg[i]);

    printf("\nStudents below 50 average: %d\n", below50);

    printf("\nScores of each student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++)
            printf("%d ", MARKS[i][j]);
        printf("\n");
    }

    return 0;
}
