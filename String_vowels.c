//This code counts all the vowels in a string
#include <stdio.h>
#include <string.h>

int main() {

  char s[20];

  //An array of vowel characters
  char vowels[ ] = "aeiou";
  int x = 0, count = 0;

  printf("Enter Word/Sentence/Phrase Here: ");
  gets(s);

  while (x < strlen(s)) {

    //loop to check if the certain char of s[] is a vowel
    for (int i = 0; i < strlen(vowels); i++) {

        //catches vowels from the strings character
        if (s[x] == vowels[i]) {
            count++;
            break;
        }
    }
    x++;
  }

  printf("%d", count);

  return 0;
}