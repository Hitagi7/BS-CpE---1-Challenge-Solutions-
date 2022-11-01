/* 
This program creates a hollow diamond
base on the users input
*/
#include <stdio.h>

int main (){

    int n, i, j, k, l;

    printf("\nEnter Number Here: ");
    scanf("%d", &n);
    printf("\n");

    //prints the top half of diamond
    for(i = 1; i <= n; printf("\n"), i++) {
        for(j = n; j >= i + 1; printf("  "), j--);

        //prints numbers form the top-left
        for(k = 1; k <= i; k++) {
            if(k == 1) {
                printf("%d", k);
            }
            else {
                printf("  ");
            }
        }

        //prints number from top-right
        for(l = k - 1; l > 1; l--) {
            if(l == 2) {
                l--;
                printf(" %d", l);
            }
            else {
                printf("  ");
            }
        }
    }

    //prints the top half of diamond
    for(i = n - 1; i >= 1; printf("\n"), i--) {
        for(j = 1; j <= n - i; printf("  "), j++);

        //prints numbers form the bottom-left
        for(k = 1; k <= i; k++) {
            if(k == 1) {
                printf("%d", k);
            }
            else {
                printf("  ");
            }
        }

        //prints numbers form the bottom-left
        for(l = k - 1; l > 1; l--) {
            if(l == 2) {
                l--;
                printf(" %d", l);
            }
            else {
                printf("  ");
            }
        }
    }
    
    return 0;
}