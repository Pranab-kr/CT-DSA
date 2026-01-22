#include <stdio.h>

void merge(int arr[], int left, int middle, int right) {

  int n1 = middle - left + 1;
  int n2 = right - middle;

  int Left[n1], Right[n2];

  for (int i = 0; i < n1; i++)
    Left[i] = arr[left + i];

  for (int j = 0; j < n2; j++)
    Right[j] = arr[middle + 1 + j];

  int i = 0, j = 0, k = left;

  while (i < n1 && j < n2) {
    if (Left[i] <= Right[j]) {
      arr[k++] = Left[i++];

    } else {
      arr[k++] = Right[j++];
    }
  }

  while (i < n1)
    arr[k++] = Left[i++];

  while (j < n2)
    arr[k++] = Right[j++];
}

void mergeShot(int arr[], int left, int right) {

  if (left < right) {

    int middle = (left + right) / 2;

    mergeShot(arr, left, middle);

    mergeShot(arr, middle + 1, right);

    merge(arr, left, middle, right);
  }
}

int main() {

  int n;

  printf("\n-:Merge Sort:-\n\n");

  printf("Enter how many elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  mergeShot(arr, 0, n - 1);

  printf("-:After sorting the array:-\n");

  for (int i = 0; i < n; i++) {

    printf("%d ", arr[i]);
  }

  return 0;
}
