#include <stdio.h>
#define MAX 5

// Circular queue implementation
int queue[MAX];
int front = -1;
int rear = -1;

// Add element to circular queue
void enqueue(int value) {
    if ((rear + 1) % MAX == front) {

        printf("Queue is full!\n");
        return;

    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = value;
        printf("Added %d\n", value);

    } else {
        rear = (rear + 1) % MAX;  // Circular increment

    queue[rear] = value;
    printf("Added %d\n", value);
}
}

// Remove element from circular queue
void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Removed %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;  // Reset when empty
    } else {
        front = (front + 1) % MAX;  // Circular increment
    }
}

// Display all elements
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Circular Queue: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d ", queue[rear]);
    printf("\n");
}

// View first element without removing it
void viewFirst() {
    if (front == -1 && rear == -1) {
        printf("Circular Queue is empty! No front element\n");
        return;
    }

    printf("Front element: %d (at index %d)\n", queue[front], front);
}

int main() {
    int choice, value;

    printf("=== Interactive Circular Queue Operations ===\n");
    printf("Maximum capacity: %d elements\n", MAX);

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue (Add element)\n");
        printf("2. Dequeue (Remove element)\n");
        printf("3. Display queue\n");
        printf("4. View first element\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
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
                viewFirst();
                break;

            case 5:
                printf("Exiting... Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please enter 1-5.\n");
        }
    }

    return 0;
}
