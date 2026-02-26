#include <stdio.h>

int main() {
  int n;

  printf("Enter how aany ele of the aray: ");
  scanf("%d", &n);

  int arr[n + 1];

  printf("Enter the ele of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int ele, pos;
  printf("Enter the position u want to insert: ");
  scanf("%d", &pos);

  if (pos < 0 || pos > n + 1) {
    printf("Enter a valid position.\n");
    return 1;
  }

  printf("Enter the ele u want to insert: ");
  scanf("%d", &ele);

  for (int i = n; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  arr[pos - 1] = ele;

  printf("After insertion update array: ");
  for (int i = 0; i < n + 1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
