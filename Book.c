#include <stdio.h>

int main() {

    int books, box;

    printf("How many books do you have?: ");
    scanf("%d", &books);

    if (books % 4 == 0) {
        books /= 4;
        box = books;
        printf("You can use %d boxes to store all of them.", box);
    }
    else if (books > -1 && books < 4) {
        books = box;
        box++;
        printf("You can use %d box to store all of them.", box);
    }
    else if (books > 4) {
        books /= 4;
        books += 1;
        box = books;
        printf("You can use %d boxes to store all of them.", box);
    }
    else {
        printf("Error!");
    }

    return 0;
}