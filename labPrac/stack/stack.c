
#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull() { return (top == MAX - 1); }
int isEmpty() { return (top == -1); }

void push(int val) {
  if (isFull()) {
    printf("The stack is overdlow");
    return;
  }

  stack[++top] = val;

  printf("Added %d\n", val);
}
void pop() {

  if (isEmpty()) {
    printf("The stack is underFlow");
    return;
  }
  printf("The del ele is: %d", stack[top--]);
}
void display() {

  if (isEmpty()) {
    printf("stack is empty!\n");
    return;
  }
  printf("The stack ele are: ");

  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
}

int main() {

  int choice, val;

  printf("stack operations\n");

  while (1) {

    printf("\n1.push\n2.pop\n3.display\n4.isFull\n5.isEmpty\n6.exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the ele: ");
      scanf("%d", &val);
      push(val);
      break;
    case 2:
      pop();

      break;
    case 3:
      display();

      break;
    case 4:
      if (isFull()) {
        printf("The full");
      } else {
        printf("Not full");
      }
      break;
    case 5:
      if (isEmpty()) {
        printf("Empty");
      } else {
        printf("Not empty");
      }
      break;
    case 6:
      printf("Bye!");

      return 0;

      break;
    default:
      printf("Enter a valid choice");

      break;
    }
  }
  return 0;
}
