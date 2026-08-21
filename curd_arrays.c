#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // CREATE
    // Array created above

    // READ
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // UPDATE
    arr[2] = 100;

    printf("\nAfter Update: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // DELETE
    for (int i = 2; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    printf("\nAfter Delete: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}