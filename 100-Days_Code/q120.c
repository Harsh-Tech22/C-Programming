//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    if (str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s\n", str);

    return 0;
}
