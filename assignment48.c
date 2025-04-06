#include <stdio.h>

int main() {
    int n, key, found = 0;
    int i;  // Declare the loop variable outside of the for loop
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}
s
