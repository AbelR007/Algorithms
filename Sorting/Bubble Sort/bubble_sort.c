/* Bubble Sorting Algorithm in C */
// =================================================
#include<stdio.h>

void bubble_sort(int arr[],int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printarr(int arr[], int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[5] = {5,1,3,2,4}, n = 5;

    printf("\nList before sorting");
    printarr(arr, n);

    bubble_sort(arr, n);

    printf("\nList after sorting");
    printarr(arr, n);
}
// ================================================
/* by Abel Roy */
