//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num); 
    first = num / pow(10, digits);

    
    if (digits == 0) {
        printf("Swapped number: %d", num);
        return 0;
    }

    int middle = num % (int)pow(10, digits);
   
    middle /= 10;

 
    swapped = last * pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d", swapped);

    return 0;
}
