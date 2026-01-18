#include <stdio.h>
#define MAX 5

// Simple queue implementation
int queue[MAX];
int front = -1;
int rear = -1;

// Check if queue is empty
int isEmpty() { return front == -1; }

// Check if queue is full
int isFull() { return rear == MAX - 1; }

// Add element to queue
void enqueue(int value) {
  if (isFull()) {
    printf("Queue is full!\n");
    return;
  }

  if (front == -1) {
    front = 0; // First element
  }

  rear++;
  queue[rear] = value;
  printf("Added %d\n", value);
}

// Remove element from queue
void dequeue() {
  if (isEmpty()) {
    printf("Queue is empty!\n");
    return;
  }

  printf("Removed %d\n", queue[front]);
  front++;

  // Reset when queue becomes empty
  if (front > rear) {
    front = rear = -1;
  }
}

// Display all elements
void display() {
  if (isEmpty()) {
    printf("Queue is empty!\n");
    return;
  }

  printf("Queue: ");
  for (int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
  }
  printf("\n");
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
        printf("Queue is full\n");
      } else {
        printf("Queue is not full\n");
      }
      break;

    case 6:
      if (isEmpty()) {
        printf("Queue is empty!\n");
      } else {
        printf("Front element: %d\n", queue[front]);
      }
      break;

    case 7:
      printf("Exiting... Goodbye!\n");
      return 0;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}
