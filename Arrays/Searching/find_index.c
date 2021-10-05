#include <stdio.h>
#include <assert.h>

int find_index(int *ptr, int size, int num) {
    for (int i = 0; i < size; i++) {
        if (ptr[i] == num)
        return 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof arr / sizeof arr[0];
    int num = 3;
    int result = find_index(arr, size, num);
    printf("The index of %d is %d\n", num, result);
    assert(find_index(arr, 4, 2) == 1);
    return 0;
}