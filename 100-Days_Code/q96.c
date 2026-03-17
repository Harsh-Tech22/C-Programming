//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    int i, start, end;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; 

    i = 0;
    while (sentence[i] != '\0') {
    
        while (sentence[i] == ' ' && sentence[i] != '\0') {
            i++;
        }
        start = i;

        while (sentence[i] != ' ' && sentence[i] != '\0') {
            i++;
        }
        end = i - 1;

      
        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence after reversing each word: %s\n", sentence);
    return 0;
}
