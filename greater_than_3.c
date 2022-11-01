#include <stdio.h>

int main() {
    
    int n, lastDig, ctr, reverse = 0;
    
    printf("Enter numbers here: ");
    scanf("%d", &n);
    
    for(; n > 0; n /= 10) {
        //last digit
        lastDig = n % 10;
        //storage
        reverse = reverse * 10 + lastDig;
    }
    for(; reverse > 0; reverse /= 10) {
        lastDig = reverse % 10;
        if(lastDig > 3) { 
            ctr = 1;
        printf("%d ", lastDig);
        }
    }
    
    if(ctr != 1) {
        printf("None");
    }
    
    return 0;
}

/*
#include <stdio.h>

int main() {

    int n = 0, num, ctr;

    printf("Input n Here: ");
    scanf("%d", &n);

        for(int x = n; x >= 0; x--, n /= 10) {
            num = n % 10;
            if (num > 3) {
                printf("%d\n", num);
                ctr = 1;
            }
            else if (ctr != 1) {
                printf("None");
                break;
            }
        }

    return 0;
}
*/