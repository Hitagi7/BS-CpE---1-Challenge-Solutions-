#include <stdio.h>

int main (){

    //declare variable first, to stay away from bugs
    int n, m, i, j, k, l;


    printf("\nEnter Number Here: ");
    scanf("%d", &n);
    printf("\n");

    //Top-half of the diamond, ends at middle
    for(i = 1; i <= n; printf("\n"), i++) {
        for(j = n; j >= i + 1; printf("  "), j--);
        for(k = 1; k <= i; printf("%d ", k), k++);
        for(l = k - 1; l > 1; l--, printf("%d ", l));
    }

    //subtract user input by 1, to start before the middle
    m = n - 1;

    //Bottom-half of the diamond, start after middle
    for(i = m; i >= 1; printf("\n"), i--) {
        for(j = 1; j <= n - i; printf("  "), j++);
        for(k = 1; k <= i; printf("%d ", k), k++);
        for(l = k - 1; l > 1; l--, printf("%d ", l));
    }

    printf("\n");

    return 0;
}