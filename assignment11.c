#include <stdio.h>
#include <math.h>

int main() {
    float P, r, t, CI, A;

    printf("Enter the principal amount: ");
    scanf("%f", &P);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    A = P * pow((1 + r / 100), t);
    CI = A - P;

    printf("The compound interest is: %.2f\n", CI);
    printf("The total amount is: %.2f\n", A);

    return 0;
}
