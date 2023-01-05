/* Recursive implementation of Bubble sort in C */
// =================================================
#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int temp, count = 0;
	// Base case
	if (n == 1)
		return;

	for (int i=0; i<n-1; i++)
		if (arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
			count++;
		}
	if (count==0)
		return;

	// Largest element is fixed,
	// recur for remaining array
	bubble_sort(arr, n-1);
}

void print_array(int arr[], int n)
{
	for (int i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);

    printf("\nList before Sorting : \n");
    print_array(arr, n);

	bubble_sort(arr, n);
	printf("\nSorted array : \n");
	print_array(arr, n);
	return 0;
}
// ================================================
/* By Abel Roy */
