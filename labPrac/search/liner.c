#include <stdio.h>

int linearSearch(int arr[], int target, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
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

  int res = linearSearch(arr, target, n);

  if (res == -1) {
    printf("The ele was not found in array");
    return 0;
  }

  printf("The ele was found at index: %d", res);
  return 0;
}
