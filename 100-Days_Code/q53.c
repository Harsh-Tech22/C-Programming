//pattern printing
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows for the top half: ");
    scanf("%d", &n); 

    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1; 
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;  
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
