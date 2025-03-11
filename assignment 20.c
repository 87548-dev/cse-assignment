#include <stdio.h>

int main() {
    int number, last_digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number - (number / 10) * 10;

    printf("The last digit is: %d\n", last_digit);
    return 0;
}
