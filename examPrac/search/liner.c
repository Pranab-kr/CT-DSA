#include <stdio.h>

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

  int res;
  for (int i = 0; i < n; i++) {

    if (arr[i] == target) {

      res = i;
      break;
    }
  }
  if (!res) {
    printf("Element was not found\n");
    return 0;
  }

  printf("Ur element found at index:- %d\n", res);

  return 0;
}
