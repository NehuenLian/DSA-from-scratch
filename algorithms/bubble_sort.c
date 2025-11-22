#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// classic bubble sort O(n2)

void bubble_sort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }

        }
    }
}


int main() {

    int arr[] = {5, 2, 9, 1, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}