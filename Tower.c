#include <stdio.h>

int main() {

    int height, width, halfWidth, z, y;

    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter width: ");
    scanf("%d", &width);

    halfWidth = width / 2;

    for(int x = 1; x <= height; x++, printf("\n")) {
        if(x == 1) {
            for(z = 0; z <= halfWidth; z++, printf(" "));
            if(width % 2 == 0) {
                printf("**");
            }
            else {
                printf("*");
            }
            continue;
        }
        else if(x > 1 && x < height) {
            if(width % 2 == 0) {
                for(int i = 1; i <= 2; i++, printf(" "));
                }
            else {
                for(int i = 1; i <= 1; i++, printf(" "));
            }
        }
        else if(x == height) {
            if(width % 2 == 0) {
                for(int n = 1; n <= 4; n++, printf("*"));
            }
            else {
                for(int n = 1; n <= 2; n++, printf("*"));
            }
        }
        for(y = 1; y <= width; y++, printf("*"));
    }

    return 0;
}