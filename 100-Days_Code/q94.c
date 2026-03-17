//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    char word[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

   
    sentence[strcspn(sentence, "\n")] = '\0';

    longest[0] = '\0';

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                len = j;
                if (len > maxLen) {
                    maxLen = len;
                    strcpy(longest, word);
                }
                j = 0;  
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
