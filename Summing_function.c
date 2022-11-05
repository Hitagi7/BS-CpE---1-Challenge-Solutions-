#include <stdio.h>

int summing_function(int number) {

    int answer = 0, lastDigit;
    int numberCpy = number;

    while(numberCpy > 10) {
        lastDigit = numberCpy % 10;
        answer += lastDigit;
        numberCpy /= 10;
    }

    if(number > 10) 
        return summing_function(answer + numberCpy);

    else
        return number;
}

int main() {
    
    int number;

    printf("Enter Number Here: ");
    scanf("%d", &number);

    printf("Answer is: %d", summing_function(number));

    return 0;
}