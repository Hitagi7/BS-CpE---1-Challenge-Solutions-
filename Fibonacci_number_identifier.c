//This program identifies the fibonacci of user input n
#include <stdio.h>
#include <math.h>

int main() {

    int myNum;
    
    //use data type double for larger bytes
    double num1, num2, dom1, answer;

    printf("Input Number Here == ");
    scanf("%d", &myNum);

    //fibonacci identifier formula
    num1 = pow(1 + sqrt(5), myNum);
    num2 = pow(1 - sqrt(5), myNum);
    dom1 = pow(2, myNum) * (sqrt(5));
    answer = (num1 - num2) / dom1;
   
    printf("Your Fibonacci Number %d is == %.0lf", myNum, answer);

    return 0;
}
