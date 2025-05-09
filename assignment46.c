#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int i;  // Declare the loop variable outside the loop
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

