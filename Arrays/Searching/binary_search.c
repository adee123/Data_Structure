#include <stdio.h>
#include <assert.h>

int binary_search(int arr[], int low, int high, int target) {
    int left = low;
    int right = high;
    int result = -1;
    while (left < right) {
        int mid = (left + right) / 2;
        int midvalue = arr[mid];
        if (target == midvalue) {
            result = mid;
            break;
        } else if ( target < midvalue) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 9, 100};
    int length = sizeof arr / sizeof arr[0];
    assert(binary_search(arr, 0, length, 0) == -1);
    assert(binary_search(arr, 0, length, 1) == 0);
    assert(binary_search(arr, 0, length, 100) == 6);
    assert(binary_search(arr, 0, length, 89) == -1);
    printf("%d", binary_search(arr, 0, length, 3));
    return 0;
}