#include <stdio.h>

int binary_search(int arr[], int target, int n) {

  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (target > arr[mid]) {

      low = mid + 1;

    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {

  int n;

  printf("Enter how many elements:- \n");

  scanf("%d", &n);
  int arr[n];

  printf("Enter the value of the elements:- \n");

  for (int i = 0; i < n; i++) {

    scanf("%d", &arr[i]);
  }

  printf("Enter the elements u want to search:- \n");

  int target;
  scanf("%d", &target);

  int res = binary_search(arr, target, n);

  if (res == -1) {

    printf("Target was not found\n");
  } else {

    printf("res = %d\n", res);
  }
}
