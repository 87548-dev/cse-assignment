#include <stdio.h>
#include <math.h>

int main() {
    int i;
    float sum = 0;

    for (i = 1; i <= 10; i++) {
        sum += pow(i, 2); 
    }

    printf("The sum of squares of the first 10 natural numbers is: %.2f\n", sum);

    return 0;
}
