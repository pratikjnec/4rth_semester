#include<stdio.h>
#include<time.h>

int main() {
    int arr[10000]; // Test with a larger array
    for (int i = 0; i < 10000; i++)
        arr[i] = i; // Fill with ascending order elements
    int n = sizeof(arr) / sizeof(arr[0]);
    clock_t start, end;
    int key = 4;
    int found = 0;
    int index = 0;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    start = clock();
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    end = clock();
    if (found) {
        printf("Element found\n");
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    printf("Time Required: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC / 10);
    return 0;
}