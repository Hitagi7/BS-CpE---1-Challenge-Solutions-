//Pyramid number pattern
#include <stdio.h>

int main () {
 
    int x, y, z, limit;

    printf("Input Limit Here: ");
    scanf("%d", &limit);

    for (x = 0; x < limit; x++, printf("\n")) {
        for (y = limit; y > x; y--, printf(" ")) {}
            for (z = 0; z <= x; z++, printf("%d ", z)) {} 
    }

return 0;
}