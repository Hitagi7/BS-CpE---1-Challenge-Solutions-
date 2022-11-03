//This code counts all the vowels in a string
#include <stdio.h>
#include <string.h>

int main() {

  char s[ ] = "Hello World";

  //An array of vowel characters
  char vowels[ ] = "aeiou";
  int x = 0, count = 0;

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