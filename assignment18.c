#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("It is a negative number.\n");
    } else if (n > 0) {
        printf("It is a positive number.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
