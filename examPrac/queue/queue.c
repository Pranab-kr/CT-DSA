#include <bits/pthreadtypes.h>
#include <stdio.h>
#define MAX 5

int qu[MAX];
int rare = -1, font = -1;

int isFull() { return rare == MAX - 1; }

int isEmpty() { return font == -1; }

void enqueue(int ele) {
  if (isFull()) {
    printf("The queue is full\n");

    return;
  }

  if (font == -1) {
    font++;
  }
  rare++;
  qu[rare] = ele;
  printf("%d is added into queue\n", ele);

  return;
}

void dequeue() {
  if (isEmpty()) {
    printf("The queue is empty\n");
    return;
  }
  int del = qu[font];
  font++;
  printf("%d is removed form the queue.\n", del);
  if (font > rare) {
    font = rare = -1; // reset
  }
}

void display() {

  if (isEmpty()) {
    printf("The queue is empty\n");
    return;
  }

  for (int i = font; i <= rare; i++) {
    printf("%d ", qu[i]);
  }
  printf("\n");

  return;
}

int main() {
  int choice, value;

  printf("=== Simple Queue Operations ===\n");

  while (1) {
    printf("\n--- Queue Menu ---\n");
    printf("1. Enqueue (Add element)\n");
    printf("2. Dequeue (Remove element)\n");
    printf("3. Display queue\n");
    printf("4. Check if empty\n");
    printf("5. Check if full\n");
    printf("6. View front element\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter value to enqueue: ");
      scanf("%d", &value);
      enqueue(value);

      break;
    case 2:
      dequeue();
      break;
    case 3:
      display();
      break;

    case 4:

      if (isEmpty()) {
        printf("Queue is empty\n");
      } else {
        printf("Queue is not empty\n");
      }
      break;

    case 5:
      if (isFull()) {
        printf("Queue is Full\n");
      } else {
        printf("Queue is not Full\n");
      }
      break;

    case 6:
      printf("Font ele is: %d", qu[font]);
      break;

    case 7:
      printf("Thank you!");
      return 0;
    default:
      printf("Enter a valid choice: \n");
      break;
    }
  }
  return 0;
}
