#include <stdio.h>

int main() {
  int n;

  printf("Enter how many elements:- ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the val of the elements:- ");

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int pos;

  printf("Enter the position where you want to delete the element:- ");

  scanf("%d", &pos);

  if (pos < 1 && pos < n) {
    printf("Enter a valid position.");

    return 1;
  }
  for (int i = pos - 1; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  printf("-:updated array:- ");

  for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
