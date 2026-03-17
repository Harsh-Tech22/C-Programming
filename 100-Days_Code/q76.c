//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, isSymmetric = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);


    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;
}
