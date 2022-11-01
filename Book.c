/*Ask for input on how many books a user will want in a box
each box will contain ONLY 4 books or less so if the number 
of books is 5 the amount of boxes used will be 2*/
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

//I'm still pretty new to coding hehe