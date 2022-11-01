#include <stdio.h>

int main() {

    double num1, num2, num3, *x, *y, *z;

    x = &num1;
    y = &num2;
    z = &num3;

    printf("Enter Your First Number: ");
    scanf("%lf", &num1);

    printf("Enter Your Second Number: ");
    scanf("%lf", &num2);

    printf("Enter Your Third Number: ");
    scanf("%lf", &num3);

    if (num1 > 0 && num2 > 0 && num3 > 0) {
        printf("%.1lf + %.1lf + %.1lf = %.1lf", num1, num2, num3, *x + *y + *z);
    }
    else if (num1 > 0 && num2 > 0) {
        printf("%.1lf + %.1lf = %.1lf", num1, num2, *x + *y);
    }
    else if (num1 > 0 && num3 > 0) {
        printf("%.1lf + %.1lf = %.1lf", num1, num3, *x + *z);
    }
    else if (num2 > 0 && num3 > 0) {
        printf("%.1lf + %.1lf = %.1lf", num2, num3, *y + *z);
    }
    else if (num1 > 0) {
        printf("%.1lf", *x);
    }
    else if (num2 > 0) {
        printf("%.1lf", *y);
    }
    else if (num3 > 0) {
        printf("%.1lf", *z);
    }
    else {
        printf("You Inputted All Negative!!");
    }

    return 0;
}