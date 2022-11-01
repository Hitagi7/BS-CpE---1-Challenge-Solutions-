#include <stdio.h>

int main() {

    int x, y;

    printf("Input Number Here == ");
    scanf("%d",&x);

    for (y = 1; y <= x; y++) {

        if (y % 3 == 0 && y % 5 == 0) {
            printf("FizzBuzz ");
        }
        else if (y % 3 == 0) {
            printf("Fizz ");
        }
        else if (y % 5 == 0) {
            printf("Buzz ");
        }
        else {
            printf("%d ", y);
        }
    }

return 0;
}