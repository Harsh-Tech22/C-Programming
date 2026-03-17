//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // remove newline

    // Find the index of the last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }

    printf("Formatted name: ");

    // Print initials for first and middle names
    i = 0;
    while (i <= lastSpaceIndex) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            printf("%c.", toupper(name[i]));
        }
        i++;
    }

    // Print the surname in full
    if (lastSpaceIndex != -1)
        printf("%s\n", &name[lastSpaceIndex + 1]);
    else
        printf("%s\n", name); // Only one name entered

    return 0;
}
