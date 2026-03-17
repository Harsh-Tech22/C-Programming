
#include<stdio.h>
int main(){
    int l; 
    printf("enter the value of l:");
    scanf("%d",&l);
    int r;
    printf("enter the value of r:");
    scanf("%d",&r);
    
    for(int i=l;i<r;i++){
        int count =0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(i> 1&& count ==0){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}