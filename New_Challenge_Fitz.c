#include <stdio.h>

int main () {

int i, k; 

    for (i = 0; i < 5; i++, printf("*\n")) {
        for (k = 0; k < i; k++, printf(" ")) {
            if (k == 0 || i == 4) {
                 printf("*");
            }
            else {
                printf(" ");
            }
        }
}

return 0;
}