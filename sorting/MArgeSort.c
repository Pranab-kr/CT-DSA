#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    
    // Calculate sizes of the two subarrays to be merged
    int n1 = mid - left + 1;  // Size of left subarray
    int n2 = right - mid;     // Size of right subarray

    // Create temporary arrays to hold the two subarrays
    int Left[n1], Right[n2];

    // Copy data from main array to temporary left subarray
    for (int i = 0; i < n1; i++) Left[i] = arr[left + i];
    
    // Copy data from main array to temporary right subarray
    for (int j = 0; j < n2; j++) Right[j] = arr[mid + 1 + j];

    // Initialize indices for merging
    int i = 0, j = 0 , k = left;    
    
    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j])
            arr[k++] = Left[i++];  // Take from left subarray
        else
            arr[k++] = Right[j++]; // Take from right subarray
    }

    // Copy remaining elements from Left subarray (if any)
    while (i < n1) arr[k++] = Left[i++];
    
    // Copy remaining elements from Right subarray (if any)
    while (j < n2) arr[k++] = Right[j++];
}


void mergeSort(int arr[], int left, int right) {
    // Base case: if left >= right, array has 0 or 1 element (already sorted)
    if (left < right) {
        // Find the middle point to divide array into two halves
        int mid = (left + right) / 2;
        
        // Recursively sort the first half
        mergeSort(arr, left, mid);
        
        // Recursively sort the second half
        mergeSort(arr, mid + 1, right);
        
        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    
    printf("\n-:Merge Sort:-\n\n");
    
    // Get the number of elements from user
    printf("Enter how many elements: ");
    scanf("%d", &n);

    // Declare array with user-specified size
    int arr[n];
    
    // Input elements into the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call merge sort function to sort the entire array
    // Parameters: array, starting index (0), ending index (n-1)
    mergeSort(arr, 0, n - 1);

    // Display the sorted array
	printf("-:After sorting:-\n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");  // Add newline for better output formatting
	
 	return 0;
 }