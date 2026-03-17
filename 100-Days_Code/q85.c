//Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
