#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof arr / sizeof arr[0];
    int total = 0;
    printf("sizeof arr = %lu and sizeof arr [0] = %lu\n",
    sizeof arr, sizeof arr[0]);
    for (int i = 0; i < size; i++) {
        total = total + arr[0];
    }
    printf("The sum of array = %d", total);
    return 0;
}