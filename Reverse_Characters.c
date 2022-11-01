#include <stdio.h>
#include <string.h>

int main() {

    char userInput[128];

    printf("Enter Sentence Here: ");
    gets(userInput);

    printf("Reversal is: ");
    for(int i = strlen(userInput); i >= 0; i--) {
        printf("%c", userInput[i]);
    }

    return 0;
}