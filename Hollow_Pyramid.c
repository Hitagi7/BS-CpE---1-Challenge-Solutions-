#include <stdio.h>

int main() {

    int n, i, j, k;

    printf("Enter Number Here: ");
    scanf("%d", &n);

    for(i = 1; i <= n; printf("\n"), i++) {
        for(j = n; j >= i + 1; printf("  "), j--);
        for(k = 1; k <= 2 * i - 1; k++) {
            if (k == 1) {
                printf("*");
            }
            else if (k == 2 * i - 1) {
                printf(" *");
            }
            else if (i == n) {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }
    }

    return 0;
}