#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void insertion_sort(int arr[], size_t size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void print_array(int xs[], size_t size) {
    for (int i = 0; i < size; i++) 
    printf(" %d", xs[i]);
    printf("\n");
}
int main() {
    int arr[] = {10, 1, 4, 0, 8};
    int size = sizeof arr / sizeof arr[0];
    insertion_sort(arr, size);
    print_array(arr, size);
}