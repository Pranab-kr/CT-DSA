
#include <stdio.h>

int main() {
  int n;

  printf("Enter how aany ele of the aray: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the ele of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int pos;
  printf("Enter the position u want to delete: ");
  scanf("%d", &pos);

  if (pos < 0 || pos > n) {
    printf("Enter a valid position.\n");
    return 1;
  }

  for (int i = pos - 1; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  printf("After delete update array: ");
  for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
