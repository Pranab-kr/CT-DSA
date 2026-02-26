#include <stdio.h>

int partition(int arr[], int low, int high) {
  int i = low - 1;
  int pivot = arr[high];

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi - 1);

    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int n;
  printf("\n-:Quick Sort:-\n\n");

  printf("Enter how many ele: \n");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the ele of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  quickSort(arr, 0, n - 1);

  printf("After swap\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
