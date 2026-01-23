#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int ele) {
  if (top == MAX - 1) {
    printf("Stack is over flow \n");
    return;
    ;
  }

  stack[++top] = ele;
  printf("%d is pushed in stack\n", ele);
  return;
}

void pop() {
  if (top == -1) {
    printf("Stack is underflow");
    return;
  }

  int poped = stack[top--];

  printf("%d is poped from the stack\n", poped);

  return;
}

void display() {

  if (top == -1) {
    printf("Stack is underflow");
    return;
  }

  for (int i = 0; i <= top; i++) {
    printf("%d ", stack[i]);
  }
  printf("\n");

  return;
}

void peak() {

  if (top == -1) {
    printf("Stack is underflow");
    return;
  }
  printf("The ele is: %d\n", stack[top]);
  return;
}

int main() {
  int ele, choice;

  while (1) {

    printf("-: Stack program :-\n");

    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEAK\n");
    printf("4. DISPLAY\n");
    printf("5. exit\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {

    case 1:
      printf("Enter the number: ");
      scanf("%d", &ele);
      push(ele);
      break;

    case 2:
      pop();
      break;

    case 3:
      peak();
      break;
    case 4:
      display();
      break;

    case 5:
      printf("Thank you!");
      return 0;
    default:
      printf("Enter a valid input!");
      break;
    }
  }

  return 0;
}
