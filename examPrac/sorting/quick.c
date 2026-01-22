#include <stdio.h>

int partition(int arr[], int low, int high) {

  int pi = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pi) {
      i++;

      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }

  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1;
}

void quickSort(int arr[], int low, int high) {

  if (low < high) {

    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot - 1);

    quickSort(arr, pivot + 1, high);
  }
}

int main() {

  int n;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Quick Sort
  quickSort(arr, 0, n - 1);

  printf("-:After sort the arr:- p\n");

  for (int i = 0; i < n; i++) {

    printf("%d ", arr[i]);
  }
  return 0;
}
