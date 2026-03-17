//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, d;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);


    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");


    for (d = 0; d < r + c - 1; d++) {
        for (i = 0; i < r; i++) {
            j = d - i;
            if (j >= 0 && j < c) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
