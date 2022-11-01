#include <stdio.h>

int main() {
    
    int n, lastDig, ctr, num = 0, mult = 1;
    
    printf("Enter numbers here: ");
    scanf("%d", &n);
    
    for(; n > 0; n /= 10) {
        //last digit
        lastDig = n % 10;
        if(lastDig > 3) {
            //storage
            num = lastDig * mult + num;
            mult *= 10;
            ctr = 1;
        }
    }
    
    if(ctr != 1) {
        printf("None");
    }
    else {
        printf("%d", num);
    }
    
    return 0;
}