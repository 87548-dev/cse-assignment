#include <stdio.h>

int main() {
    printf("Enter a Number: ");

    int n, rev = 0;

    scanf("%d", &n);

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("reverse: ");
    printf("%d", rev);

    return 0;
}
