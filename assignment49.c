#include <stdio.h>

void callByValue(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] + 1; // Increment each element of the array by 1
    }
    printf("Array in callByValue function: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void callByReference(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2; // Multiply each element of the array by 2
    }
    printf("Array in callByReference function: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    callByValue(arr, size); // Call by value
    printf("Array after callByValue: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    callByReference(arr, size); // Call by reference
    printf("Array after callByReference: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

