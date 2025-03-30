#include <stdio.h>

int sum_of_squares_recursive(int n) {
    if (n == 1) {
        return 1;
    }
    return (n * n) + sum_of_squares_recursive(n - 1);
}

int main() {
    int n;

    printf("Enter the number of terms (natural numbers): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sum_of_squares_recursive(n);
        printf("The sum of the squares of the first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}


