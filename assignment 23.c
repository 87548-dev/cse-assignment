#include <stdio.h>

int main() {
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);
    
    if (a % 400 == 0) {
        printf("The year %d is a leap year.\n", a);
    } else if (a % 100 == 0) {
        printf("The year %d is not a leap year.\n", a);
    } else if (a % 4 == 0) {
        printf("The year %d is a leap year.\n", a);
    } else {
        printf("The year %d is not a leap year.\n", a);
    }

    return 0;
}
