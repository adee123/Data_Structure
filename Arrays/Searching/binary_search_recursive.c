#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int binary_search(int arr[], int low, int high, int target) {
    if (low < high) {
        int mid = (low + high) / 2;
        int midvalue = arr[mid];
        if (target == midvalue) {
            return mid;
        } else if (target < midvalue) {
            return binary_search(arr, low, high, target);
        } else {
            return binary_search(arr, mid + 1, high, target);
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9};
    int length = sizeof arr / sizeof arr[0];
    printf("%d", binary_search(arr, 0, length, 5));
    assert(binary_search(arr, 0, length, 0) == -1);
    assert(binary_search(arr, 0, length, 1) == 0);
    assert(binary_search(arr, 0, length, 7) == 6);
    assert(binary_search(arr, 0, length, 100) == -1);
    return 0;
}