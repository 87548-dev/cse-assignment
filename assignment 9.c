#include <stdio.h>

int main() {
    int a = 10, b = 15, c;

    c = a;
    a = b;
    b = c;

    printf("%d %d\n", a, b);
    return 0;
}
