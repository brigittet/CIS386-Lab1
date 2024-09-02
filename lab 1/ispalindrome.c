#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char userInput[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", userInput);
    /*fgets(userInput, sizeof(userInput), stdin); */
    /* printf("You entered %s.\n", userInput); */
    int length = strlen(userInput);
    /* printf("Length: %d.\n", length); */

    char modInput[length];
    int newIndex = 0;
    int modlength = length;
    for(int i=0; i < length; i++) {
        if (ispunct(userInput[i])) {
            modlength--;
        }
        else if (userInput[i] == ' ') {
            modlength--;
        }
        else {
            modInput[newIndex] = tolower(userInput[i]);
            newIndex++;
        }
    }
    
    char forward[modlength];
    char backward[modlength];
    for (int j=0; j<modlength; j++) {
        forward[j] = modInput[j];
        backward[(modlength - 1) - j] = modInput[j];
    }
    
    for (int k=0; k<modlength; k++) {
        if (forward[k] != backward[k]) {
            printf("False.");
            break;
        }
        else if (k == modlength - 1) {
            printf("True.");
        }
    }
    return 0;
}