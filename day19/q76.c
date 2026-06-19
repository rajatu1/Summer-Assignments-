#include <stdio.h>

int main() {
    int n;
    int i, j;
    int main_sum = 0;
    int sec_sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        main_sum = main_sum + matrix[i][i];
        sec_sum = sec_sum + matrix[i][n - 1 - i];
    }

    printf("\nSum of main diagonal elements: %d\n", main_sum);
    printf("Sum of secondary diagonal elements: %d\n", sec_sum);

    return 0;
}