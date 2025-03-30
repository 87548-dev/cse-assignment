#include <stdio.h>
#include <math.h>

int main() {
    int n, m, x = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    m = n;

    while (n > 0) {
        x = x + pow(n % 10, 3);
        n = n / 10;
    }

    if (x == m) {
        printf("%d is an Armstrong number\n", m);
    } else {
        printf("%d is not an Armstrong number\n", m);
    }

    return 0;
}
