#include <stdio.h>

int main() {
    int i, n = 0;

    for (i = 1; i <= 10; i++) {
        n = n + (i * i);
    }

    printf("%d\n", n);
    return 0;
}
