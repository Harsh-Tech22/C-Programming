//Multiply two matrices.
#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, i, j, k;

    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of Matrix B (p): ");
    scanf("%d", &p);

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

  
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

 
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
