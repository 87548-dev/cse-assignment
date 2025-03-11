#include <stdio.h>
#include <math.h>

int main() {
    float a;
    int b, c;

    printf("Enter the number: ");
    scanf("%f", &a);

    b = floor(a);
    c = ceil(a);

    printf("The floor value is: %d\n", b);
    printf("The ceiling value is: %d\n", c);

    return 0;
}
