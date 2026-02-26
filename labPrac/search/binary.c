#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
  int low = 0, high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == target) {
      return mid;

    } else if (arr[mid] < target) {
      low = mid + 1;

    } else {
      high = mid - 1;
    }
  }

  return -1;
}
int main() {
  int n;

  printf("Enter how many ele\n");
  scanf("%d", &n);
  int arr[n];

  printf("Enter the ele of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the ele u want to search: ");
  int target;
  scanf("%d", &target);

  int res = binarySearch(arr, n, target);

  if (res == -1) {
    printf("The target was not found!");

    return 0;
  }

  printf("The target was found at index: %d", res);

  return 0;
}
