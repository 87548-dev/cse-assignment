#include <stdio.h>

#define SIZE 5

void reverseArray(int arr[], int n) {
    int temp, start = 0, end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int i;  
    printf("Original Array: ");
    for (i = 0; i < SIZE; i++) {  
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, SIZE);

    printf("Reversed Array: ");
    for (i = 0; i < SIZE; i++) {  
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

