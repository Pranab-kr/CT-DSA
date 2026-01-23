#include <stdio.h>

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // Choose the last element as pivot
  int i =
      low - 1; // Index of smaller element (indicates right position of pivot)

  // Traverse through all elements except the pivot
  for (int j = low; j < high; j++) {
    // If current element is smaller than or equal to pivot
    if (arr[j] < pivot) {
      i++; // Increment index of smaller element
      // Swap current element with element at index i
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  // Place pivot at its correct position (after all smaller elements)
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1; // Return the partition index (final position of pivot)
}

void quickSort(int arr[], int low, int high) {
  // Base case: if low >= high, array has 0 or 1 element (already sorted)
  if (low < high) {
    // Partition the array and get the pivot index
    int pi = partition(arr, low, high);

    // Recursively sort elements before the pivot
    quickSort(arr, low, pi - 1);

    // Recursively sort elements after the pivot
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int n;

  printf("\n-:Quick Sort:-\n\n");

  printf("Enter how many elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  quickSort(arr, 0, n - 1);

  // Display
  printf("-:After sorting:-\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
