#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int* arr = (int*)malloc(n * sizeof(int));  // Dynamically allocate memory for the array
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int i;  // Declare the loop variable outside the for loop
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--) {  // Reusing the same 'i' variable
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // Free dynamically allocated memory

    return 0;
}

