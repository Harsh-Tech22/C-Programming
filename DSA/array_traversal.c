#include<stdio.h>
int main(){
int a[50],size;
printf("Enter a size of array:");
scanf("%d", &size);
if(size>50){
    printf("overflow condition");
    return 0;
}
printf("Enter a elements for array:");
for(int i = 0;i<size;i++){
scanf("%d", &a[i]);

}
for(int j = 0;j<size;j++){
    printf("Result:%d\n", a[j]);
}
return 0;
}