#include<stdio.h>

/*

 * Time Complexity: O(n²) worst case, O(n) best case (when array is already sorted)
 * Space Complexity: O(1)
 */
void insertionSort(int arr[], int n) {

	// Start from second element (index 1) as first element is considered sorted
	for(int i=1 ; i<n; i++) {
		int key = arr[i];  
		int j = i-1;       
		
		while(j>=0 && arr[j]> key){
			arr[j+1] = arr[j];  // Shift element to right
			j--;                // Move to previous element
		}
		
		// Insert the key at its correct position
		arr[j+1] = key;
	}
}

 int main() {
 	
 	printf("\n-:Insertion Sort:-\n\n");
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
	
	// Call insertion sort function to sort the array
	insertionSort(arr, n);
	
	// Display the sorted array
	printf("-:After sorting:-\n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");  // Add newline 
	
 	return 0;
 }