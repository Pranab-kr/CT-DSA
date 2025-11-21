// Binary Search implementation
#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // not found
}

int main() {
    int n, i;
    printf("\n-:Binary Search:-\n\n");
    // Get the number of elements from user
    printf("Enter how many elements: ");
    scanf("%d", &n);
    // Declare array with user-specified size
    int arr[n];
    // Input elements into the array
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    // Get the target element to search
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);
    // Call binary search function
    int result = binarySearch(arr, n, target);
    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}
