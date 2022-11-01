#include <stdio.h>

int main() {

int limit, n, i, iadd=0;

printf("Input Limit Here == ");
scanf("%d", &limit);
 
for (n = 0; n < limit; n++) {
    printf("Input Number Here == ");
    scanf("%d", &i);

if (i > 0) {
    iadd += i;
}

}

printf("Total Sum Is == %d", iadd);
}