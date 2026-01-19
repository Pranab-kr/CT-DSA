#include <stdio.h>

void selection(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {

    int min = i;

    for (int j = i + 1; j < n; j++) {

      if (arr[j] < arr[min]) {

        min = j;
      }
    }

    int temp = arr[min];
    arr[min] = arr[i];

    arr[i] = temp;
  }
}

int main() {

  int n;

  printf("Enter how many ele:- ");

  scanf("%d", &n);

  int arr[n];

  printf("Enter the values of the arr:- ");
  for (int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
  }

  selection(arr, n);

  printf("-:After sort the array:-\n");

  for (int i = 0; i < n; i++) {

    printf("%d ", arr[i]);
  }
  return 0;
}
