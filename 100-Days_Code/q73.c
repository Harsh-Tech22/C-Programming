//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int rowSum[100];  

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;  
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

   
    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
