#include <stdio.h>
#include<time.h>
clock_t time_required = 0;
clock_t time_req;

clock_t bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++) 
    { 
        for (j = 0; j < n-i-1; j++)  
        { 
            if (arr[j] > arr[j+1]) 
            { 
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        } 
    } 
    
    return time_required = clock();

} 

clock_t insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) 
    { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) 
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
    return time_required = clock();

} 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        int temp = arr[min_idx]; 
        arr[min_idx] = arr[i]; 
        arr[i] = temp; 
    }

    return time_required = clock();

} 

void printArray(int arr[], int n) 
{ 
    int i;
    printf("Sorted array: \n"); 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n");  
} 
  
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    time_req = clock();
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n"); 
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n");  
  

    printf("\n\nInsertion Sort\n"); 
    time_required = insertionSort(arr, n);
    printArray(arr, n); 
    printf("Time Required for Bubble sort algorithm: %lf",  ((float)time_required / CLOCKS_PER_SEC));


    printf("\n\nBubble Sort\n"); 
    time_required = bubbleSort(arr, n);
    printArray(arr, n);
    printf("Time Required for Bubble sort algorithm: %lf", ((float)time_required / CLOCKS_PER_SEC));

    time_required = clock();
    printf("\n\nTime Required for insertion sort algorithm: %lf", time_required);
    return 0; 
}
