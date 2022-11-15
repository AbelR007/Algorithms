/* Linear Search Algorithm in C Lang */
// =================================================
#include<stdio.h>

void linear_search(int arr[],int element){
    int length = 5;
    int found = 0, pos = 0;

    for (int i=0; i<length; i++){
        if (arr[i] == element){
            found = 1;
            pos = i;
            break;
        }
    }

    if (found == 1)
        printf("Found element %d at position %d\n",element, pos+1);
    else
        printf("Element not found");
}

void main(){
    int arr[5] = {1,2,3,4,5};
    int element = 4;

    linear_search(arr, element);
}
// ================================================
/* By Abel Roy */
