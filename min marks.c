#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    int marks[n][m];
    for (int i = 0; i < n; i++) {
        printf("Enter the marks for student %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("The minimum marks scored in each subject are:\n");
    for (int j = 0; j < m; j++) {
        int min_marks = marks[0][j];
        for (int i = 1; i < n; i++) {
            if (marks[i][j] < min_marks) {
                min_marks = marks[i][j];
            }
        }
        printf("Subject %d: %d\n", j + 1, min_marks);
    }

    return 0;
}

