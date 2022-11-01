#include <stdio.h>

int main() {

  int x, y, z;

  printf("Input Number Here: ");
  scanf("%d", &z);

  for (x = 1; x <= z; x++, printf("\n")) {
    for (y = 1;  y <= x; y++) {
      printf("*");
    }
  }
  for (x = z; x > 1; x--, printf("\n")) {
    for (y = 1;  y < x; y++) {
      printf("*");
    }
  }

return 0;
}
