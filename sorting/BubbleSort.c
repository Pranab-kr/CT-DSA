#include<stdio.h>

/*
 * Time Complexity: O(n²) worst case, O(n) best case (when array is already sorted)
 * Space Complexity: O(1)
 */
void bubbleSort(int arr[], int n) {

	// Outer loop: runs n-1 times
	for(int i=0 ; i<n-1; i++) {
		int swapped = 0;  // Flag
		
		for(int j=0; j<n-i-1; j++) {
			// If current element is greater than next element, swap them
			if(arr[j] > arr[j+1]) {
				swapped = 1;  // Set flag to indicate a swap occurred
				
				// Swap the elements using temporary variable
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
		// Optimization: if no swapping occurred, array is already sorted
		if(!swapped){
			break;
		}
	}
}

 int main() {
 	
 	printf("\n-:Bubble Sort:-\n\n");
	int n;
	
	// Get the number of elements from user
	printf("Enter how many elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	// Input elements into the array
	printf("Enter the elements of the array: ");
	for(int i=0; i<n ;i++ ){
		scanf("%d", &arr[i]);
	}
	
	// Call bubble sort function to sort the array
	bubbleSort(arr, n);
	
	// Display the sorted array
	printf("-:After sorting:-\n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");  // Add newline for better output formatting
	
 	return 0;
 }
