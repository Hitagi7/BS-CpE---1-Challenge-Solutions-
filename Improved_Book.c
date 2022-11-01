#include <stdio.h>

int main() {

    int books, box = 0;

    printf("How many books do you have?: ");
    scanf("%d", &books);

    for (box = 0; books > 0; box++, books -= 4);
    printf("You can use %d boxes to store all of them.", box);
    
    return 0;
}