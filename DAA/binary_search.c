#include<stdio.h>
#include<time.h>

clock_t start, end;

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main() {
    int arr[10000]; // Test with a larger array
    for (int i = 0; i < 10000; i++)
        arr[i] = i; // Fill with ascending order elements
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    start = clock();
    int result = binarySearch(arr, 0, n - 1, x);
    end = clock();
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    printf("Time Required: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}