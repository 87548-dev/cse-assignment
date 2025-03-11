#include <stdio.h>

int main() {
    int a = 25, b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d %d\n", a, b);
    return 0;
}
