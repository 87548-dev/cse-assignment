#include <stdio.h>

int main() {
    float f1, c1, f2, c2;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c1);
    f1 = (c1 * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f1);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f2);
    c2 = (f2 - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", c2);

    return 0;
}
