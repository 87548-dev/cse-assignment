#include <stdio.h>

int main() {
    int a = 0, b = 1, s = 0, j, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (j = 1; j <= n; j++) {
        printf("%d ", a);
        s = a + b;
        a = b;
        b = s;
    }

    return 0;
}
