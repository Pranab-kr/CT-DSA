
#include <stdio.h>

void selection(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {

    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}
int main() {
  int n, target;

  printf("Enter how many eleL: ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the ele of the array: ");
  for (int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
  }

  selection(arr, n);

  printf(":After sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
