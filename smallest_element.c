#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 40, 15};
    int n = 5;

    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element = %d", min);

    return 0;
}