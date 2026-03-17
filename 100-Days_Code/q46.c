//Write a program to print the following pattern:
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("enter the number of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}