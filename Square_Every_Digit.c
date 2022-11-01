#include <stdio.h>

int main() {

    int n, digit, reverse = 0, answer = 0;

    printf("Enter number here: ");
    scanf("%d", &n);

    int checker = n;

    while(checker > 0) {
        digit = checker % 10;
        reverse = (reverse * 10) + digit;
        checker /= 10;
    }
    while(reverse > 0) {
        digit = reverse % 10;
        if(digit < 4) {
            answer = (answer * 10) + digit * digit;
        }
        else {
            answer = (answer * 100) + digit * digit;
        }
        reverse /= 10;
    }
    n %= 10;
    if(n == 0) {
        answer *= 10;
    }          

    printf("Squared digits: %d", answer);

    return 0;
}