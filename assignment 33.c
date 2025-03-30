#include <stdio.h>

int main() {
    int n, m, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reversed Number: %d\n", rev);

    if (rev == m) {
        printf("The given number is palindrome\n");
    } else {
        printf("The given number is not palindrome\n");
    }

    return 0;
}
