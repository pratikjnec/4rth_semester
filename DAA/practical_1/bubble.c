#include <stdio.h>
#include <time.h>

clock_t start, end;
void bubbleSort(int arr[], int n) 
{ 
    int i, j;
    start = clock();
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
    end = clock(); 
} 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    printf("Unsorted array: \n"); 
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 

    bubbleSort(arr, n); 
    
    printf("Sorted array: \n"); 
    
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
    double time_taken = (end);
    printf("Time Required: %lf miliseconds\n", time_taken);

    return 0; 
}
