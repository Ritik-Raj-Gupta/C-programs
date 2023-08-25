#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of courses: ");
    scanf("%d", &m);

    int marks[n][m];
    for (int i = 0; i < n; i++) {
        printf("Enter the marks for student %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("Course %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("The average marks scored by each student are:\n");
    for (int i = 0; i < n; i++) {
        int total_marks = 0;
        for (int j = 0; j < m; j++) {
            total_marks += marks[i][j];
        }
        double avg_marks = (double)total_marks / m;
        printf("Student %d: %.2f\n", i + 1, avg_marks);
    }

    return 0;
}
