#include <stdio.h>

void bubble(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {

    int isSwaped = 0;

    for (int j = 0; j < n - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {

        isSwaped = 1;

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    if (!isSwaped) {
      break;
    }
  }
}
int main() {
  int n, target;

  printf("Enter how many eleL: ");
  scanf("%d", &n);
  int arr[n];

  printf("Enter thge ele of the array: ");
  for (int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
  }

  bubble(arr, n);

  printf(":After sort: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
