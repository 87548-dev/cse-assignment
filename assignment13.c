#include <stdio.h>
#include <math.h>

int main() {
    float a, b;

    printf("Enter the number: ");
    scanf("%f", &a);

    b = sqrt(a);

    printf("The square root of %.2f is %.2f\n", a, b);

    return 0;
}
