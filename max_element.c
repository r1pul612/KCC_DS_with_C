#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 40, 15};
    int n = 5;

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element = %d", max);

    return 0;
}