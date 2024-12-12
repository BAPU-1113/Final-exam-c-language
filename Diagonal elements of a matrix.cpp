#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
            if (i + j == rows - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}