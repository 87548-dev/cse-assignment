#include <stdio.h>

int main() {
    char a;
    printf("Enter Head or Tail in (H/T): ");
    scanf("%c", &a);
    
    if (a == 'T') {
        printf("Tail");
    } else {
        printf("Head");
    }
    
    return 0;
}
