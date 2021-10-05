#include <stdio.h>

int addElements(int *ptr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = total + ptr[i];
    }
    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof arr / sizeof arr[0];
    int total = 0;
    total = addElements(arr, size);
    printf("The sum of array = %d", total);
    return 0;
}