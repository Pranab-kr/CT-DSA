#include <stdio.h>

void bubble_sort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {

    int swapped = 0;
    for (int j = 0; j < n - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {
        swapped = 1;

        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }

    if (!swapped) {

      break;
    }
  }
}

int main() {
  int n;
  printf("Enter how many elements: -");

  scanf("%d", &n);

  int arr[n];
  printf("Enter the value of the elements:- ");

  for (int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, n);

  printf("-:After shorting array:-\n");

  for (int i = 0; i < n; i++) {

    printf("%d ", arr[i]);
  }
}
