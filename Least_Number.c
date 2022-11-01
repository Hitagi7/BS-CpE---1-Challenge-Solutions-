#include <stdio.h>

int main(void) {

    int n[] = {5, 1, 3, 7, 11};
    int size = sizeof(n)/sizeof(n[0]);
    int highest = 0;

    for(int i = 0; i < size; i++) {
        if(n[i] > highest) {
            highest = n[i];
        }
    }
    printf("%d", highest);

    return 0;
}