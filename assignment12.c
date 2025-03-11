#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
