#include <stdio.h>

#define USD_TO_PHP 49.2

int main () {

    float USD, peso;
    int denomination, converter, total;

    printf("\nEnter amount (USD): $");
    scanf("%f", &USD);

    printf("\nAmount (USD): $%.2f\n", USD);
    
    total = USD * USD_TO_PHP;
    peso = total;

    printf("Amount (Php): Php %.2f\n", peso);
    printf("\nDenomination:\n");

    int bill[] = {1000, 500, 100, 20, 5, 1};

    for (int x = 0; x <= 5; x++) {
        
        converter = peso;
        denomination = (converter / bill[x]) * bill[x];

    if (bill[x] <= 1000 && bill[x] > 5) {
        printf("%d peso bill = %d = Php %d.00\n", bill[x], converter / bill[x], denomination);
    }

    else {
        printf("%d peso coin = %d = Php %d.00\n", bill[x], converter / bill[x], denomination);
    }
        peso -= denomination;

    }
    printf("TOTAL: Php %d.00\n\n", total);

    return 0;
}