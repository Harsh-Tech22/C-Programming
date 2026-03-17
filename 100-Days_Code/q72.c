//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];
    int sum = 0;

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];   
        }
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
