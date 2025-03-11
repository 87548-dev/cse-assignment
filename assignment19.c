#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater than a\n");
    }

    return 0;
}
