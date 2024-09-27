#include <stdio.h>

int main() {
    int num = 10;

    if (num > 20) {
        printf("Number is greater than 20.\n");
    } else if (num > 15) {
        printf("Number is greater than 15 but less than or equal to 20.\n");
    } else if (num > 10) {
        printf("Number is greater than 10 but less than or equal to 15.\n");
    } else {
        printf("Number is 10 or less.\n");
    }

    return 0;
}
