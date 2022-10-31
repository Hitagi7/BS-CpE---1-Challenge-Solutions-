/* This program creates an arrow pattern (based on the user input) 
pointing at the left*/

#include <stdio.h>

int main() {

    int n, i, j, k;

    //Gets user input n
    printf("Enter number here: ");
    scanf("%d", &n);

    //Prints top-half of the arrow
    for(i = 1; i <= n + 1; printf("\n"), i++) {
        for(j = i; j <= n; printf("  "), j++);
        for(k = 1; k <= i; printf("*"), k++);
    }
    //Prints bottom-half of the arrow
    for(i = n; i >= 1; printf("\n"), i--) {
        for(j = i; j <= n; printf("  "), j++);
        for(k = 1; k <= i; printf("*"), k++);
    }

    return 0;
}