#include <stdio.h>

int main() {
  int n, i, pos, ele;

  // Input the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n + 1]; // Array with one extra space for the new element

  // Input the elements of the array
  printf("Enter %d elements of the array: \n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Input the element to insert and its position
  printf("Enter the element to insert: ");
  scanf("%d", &ele);
  printf("Enter the position (1 to %d): ", n + 1);
  scanf("%d", &pos);

  // Validate position
  if (pos < 1 || pos > n + 1) {
    printf("Invalid position!\n");
    return 1;
  }

  // Shift elements to the right to make space for the new element
  for (i = n; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  // Insert the new element
  arr[pos - 1] = ele;

  // Print the updated array
  printf("Updated array: \n");
  for (i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
