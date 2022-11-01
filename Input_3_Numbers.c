#include <stdio.h>

int main() {

    int x, y, z;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &x, &y, &z);

    for(;x <= y; x++) {
        if(x % z == 0) {
            printf("%d ", x);
        }
    }

    return 0;
}