//print the pattern
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    int m;
    printf("enter the number of column:");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){
          int a=5;
        for(int j=1;j<=i;j++){
         printf("%d",a);
         a=a-1;
        }
        printf("\n");
    }
    return 0;

}