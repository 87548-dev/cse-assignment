#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of the circle is: %.2f\n", area);

    return 0;
}
