#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void copyArray(int original[], int copy[], int n) {
    for (int i = 0; i < n; i++)
        copy[i] = original[i];
}

int main() {
    int original[10000]; // Test with a larger array
    for (int i = 0; i < 10000; i++)
        original[i] = 10000 - i; // Fill with descending order elements
    
    int n = sizeof(original) / sizeof(original[0]);
    int arr[n];
    
    clock_t start, end;

    // Insertion Sort
    copyArray(original, arr, n);
    start = clock();
    for (int i = 0; i < 10; i++)
        insertionSort(arr, n);
    end = clock();
    printf("\nInsertion Sort:\n");
    printf("Time Required: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC / 10); // Average time

    // Bubble Sort
    copyArray(original, arr, n);
    start = clock();
    for (int i = 0; i < 10; i++) 
        bubbleSort(arr, n);
    end = clock();
    printf("\nBubble Sort:\n");
    printf("Time Required: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC / 10); // Average time

    // Selection Sort
    copyArray(original, arr, n);
    start = clock();
    for (int i = 0; i < 10; i++) // Repeat to amplify time
        selectionSort(arr, n);
    end = clock();
    printf("\nSelection Sort:\n");
    printf("Time Required: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC / 10); // Average time

    return 0;
}
