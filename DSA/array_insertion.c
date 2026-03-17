#include<stdio.h>

int main(){
    int a[20], size, position, num;

    printf("Enter size of array: ");
    scanf("%d", &size);

    if(size > 20){
        printf("Overflow condition\n");
        return 0;
    }

    printf("Enter elements for array:\n");
    for(int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }

    if(size == 20){
        printf("Array is full!\n");
        return 0;
    }

    printf("Enter a number to insert: ");
    scanf("%d", &num);

    printf("Enter a position (0 to %d): ", size);
    scanf("%d", &position);

    if(position < 0 || position > size){
        printf("This is invalid position!\n");
        return 0;
    }


    for(int k = size - 1; k >= position; k--){
        a[k + 1] = a[k];
    }

   
    a[position] = num;
    size++; 


    printf("Updated array:\n");
    for(int j = 0; j < size; j++){
        printf("%d\n", a[j]);
    }

    return 0;
}