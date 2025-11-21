#include<stdio.h>

/*
 * Time Complexity: O(n²) in all cases (best, average, worst)
 * Space Complexity: O(1)
 */
void selectionSort(int arr[], int n) {

	// Outer loop: iterate through each position in the array
	for(int i=0 ; i<n-1; i++) {
		int minIndex = i;  // Assume current element is the minimum
		
		// Inner loop: find the actual minimum element in remaining unsorted array
		for (int j = i+1; j<n ; j++) {
			// If we find a smaller element, update minIndex
			if (arr[j]< arr[minIndex]) {
				minIndex = j;
			}
		}
		
		// Swap the found minimum element with the current position
		// This places the minimum element at its correct sorted position
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}

 int main() {
 	
 	// Note: Title should be "Selection Sort" not "Insertion Sort"
 	printf("\n-:Selection Sort:-\n\n");
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
	
	// Call selection sort function to sort the array
	selectionSort(arr, n);
	
	// Display 
	printf("-:After sorting:-\n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n"); 
	
 	return 0;
 }