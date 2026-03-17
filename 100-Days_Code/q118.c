//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing numbe
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    int arr[n-1];  
    printf("Enter %d elements (from 0 to %d, one missing): ", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n-1; i++) {
        arraySum += arr[i];
    }

    int missing = totalSum - arraySum;
    printf("%d\n", missing);

    return 0;
}
