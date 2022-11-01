#include <stdio.h>

int main() {
    
    int givenNum, floatValues, rangeCounter = 0, sum = 0, x;
    float average;

    printf("\nInput Number Here == ");
    scanf("%d", &givenNum);

    if (givenNum <= 0) {
        printf("Invalid Input!");
    }
    else if (givenNum % 2 == 0) {
        printf("The range of even numbers are == {");
        for (x = 1; x <= givenNum; x++) {
            if (x % 2 == 0) {
                printf("%d", x);
                sum += x;
                rangeCounter++;
            }
            else if (x != 1) {
                printf(", ");
            }
        }
        printf("}");
        average = sum / rangeCounter;
        printf("\nSUM == %d\n", sum);
        printf("AVERAGE == %.1f\n\n", average);
    }
    else {
        printf("The range of odd numbers are == {");
        for (x = 1; x <= givenNum; x++) {
            if (x % 2 == 1) {
                printf("%d", x);
                sum += x;
                rangeCounter++;
             }
             else {
                printf(", ");
            }
        }
        printf("}");
        average = sum / rangeCounter;
        printf("\nSUM == %d\n", sum);
        printf("AVERAGE == %.1f\n\n", average);
    }

    return 0;
}