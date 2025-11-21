#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
  printf("\nDLinear search\n");
  int n ;
  printf("How many elements of ur array: ");
  scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);
    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
}
