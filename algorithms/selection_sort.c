#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// selection sort (On2) 

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);
    /*
    Out:
    Original array: 64 25 12 22 11
    */

    selection_sort(arr, n);
    
    printf("Sorted array: ");
    print_array(arr, n);
    /*
    Out:
    Sorted array: 11 12 22 25 64
    */

    return 0;
}