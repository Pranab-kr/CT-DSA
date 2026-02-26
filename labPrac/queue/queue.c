#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rare = -1;

int isFull() { return (rare == MAX - 1); }
int isEmpty() { return (front == -1); }

void enqueue(int val) {
  if (isFull()) {
    printf("The queue is overdlow");
    return;
  }

  if (front == -1) {

    front = 0;
  }
  rare++;
  queue[rare] = val;

  printf("Added %d\n", val);
}
void dequeue() {
  if (isEmpty()) {
    printf("The queue is underFlow");
    return;
  }
  printf("The del ele is: %d", queue[front]);
  front++;

  if (front > rare) {
    front = rare = -1; // reset
  }
}
void display() {

  if (isEmpty()) {
    printf("Queue is empty!\n");
    return;
  }
  printf("The queue ele are: ");

  for (int i = front; i <= rare; i++) {
    printf("%d ", queue[i]);
  }
}

int main() {

  int choice, val;

  printf("queue operations\n");

  while (1) {

    printf("\n1.enqueue\n2.dequeue\n3.display\n4.isFull\n5.isEmpty\n6.exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the ele: ");
      scanf("%d", &val);
      enqueue(val);
      break;
    case 2:
      dequeue();

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
