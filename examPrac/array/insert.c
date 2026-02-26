#include <stdio.h>

int main() {
  int n;

  printf("Enter how many elements:- ");
  scanf("%d", &n);

  int arr[n + 1];
  printf("Enter the val of the elements:- ");

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int pos, ele;

  printf("Enter the pos and the ele that u want to enter:- ");

  scanf("%d %d", &pos, &ele);

  if (pos < 1 || pos > n + 1) {
    printf("Enter a valid position.");

    return 1;
  }
  for (int i = n; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  arr[pos - 1] = ele;

  printf("-:updated array:- ");

  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
