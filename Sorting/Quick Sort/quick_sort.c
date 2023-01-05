/* Quick Sort Algorithm in C */
// =================================================
#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1, temp;

    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quick_sort(int arr[], int low, int high){
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
}

int main(){
    int arr[5] = {5,4,3,2,1}, n = 5;

    printf("\nBefore Sort : ");
    print_array(arr, n);

    quick_sort(arr, 0, n);

    printf("\nBefore Sort : ");
    print_array(arr, n);

    return 0;
}
// ================================================
