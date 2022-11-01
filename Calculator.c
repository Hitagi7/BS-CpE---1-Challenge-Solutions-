#include <stdio.h>
#include <string.h>
#include <math.h>

  int main() {

    char operator; 
    double x, y;
    printf("Enter Operator (+, -, *, /): ");
    scanf("%c", &operator); 
    printf("Enter two Numbers: ");
    scanf("%lf %lf", &x, &y);

    switch (operator) {
      case '+':
        printf("%.1lf + %.1lf = %.1lf", x, y, x + y);
        break;
      case '-':
        printf("%.1lf - %.1lf = %.1lf", x, y, x - y);
        break;
      case '*':
        printf("%.1lf * %.1lf = %.1lf", x, y, x * y);
       break;
      case '/':
        printf("%.1lf / %.1lf = %.1lf", x, y, x / y);
       break;
    default:
      printf("Error: Your Input is Invalid!");
    }

  return 0;
  }
