//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    
    int x = 0;
    for (int i = 1; i * i <= total; i++) {
        if (i * i == total) {
            x = i;
            break;
        }
    }

    if (x == 0) 
        printf("-1\n");
    else
        printf("%d\n", x);

    return 0;
}
