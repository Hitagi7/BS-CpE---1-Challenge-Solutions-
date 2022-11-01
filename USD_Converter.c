/*Ms. Bianca is a well known owner of a money changer. As the tourism boost,
more local and foreign travelers are visiting her business. In order to serve
better with its clients, she wish to have a program that would aid its business.
Create a program that would convert USD to PhP then denominates (if added will add up to similar value)
the given amount into the count of 1000 bill, 500 bill, 100 bill, 20 bill, 5 peso coin, and 1 peso coin.
Using the current forex value of 49.2 PhP for every 1 USD. The fraction part of the peso part is truncated/neglected.
 */
#include <stdio.h>

#define USD_TO_PHP 49.2

int main()
{

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

    for (int x = 0; x <= 5; x++)
    {

        converter = peso;
        denomination = (converter / bill[x]) * bill[x];

        if (bill[x] <= 1000 && bill[x] > 5)
        {
            printf("%d peso bill = %d = Php %d.00\n", bill[x], converter / bill[x], denomination);
        }

        else
        {
            printf("%d peso coin = %d = Php %d.00\n", bill[x], converter / bill[x], denomination);
        }
        peso -= denomination;
    }
    printf("TOTAL: Php %d.00\n\n", total);

    return 0;
}