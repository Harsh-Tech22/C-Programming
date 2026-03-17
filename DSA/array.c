#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    for(int i = 0;i<=a;i++){
        printf("\n");
        for(int j = 1;j<=i;j++){
            printf("*");
        }
    }

    return 0;
}