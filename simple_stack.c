#include <stdio.h>
#define MAX 5

// Simple stack implementation
int stack[MAX];
int top = -1;

// Check if stack is empty
int isEmpty() {
    return top == -1;
}

// Check if stack is full
int isFull() {
    return top == MAX - 1;
}

// Add element to stack (push)
void push(int value) {
    if (isFull()) {
        printf("Stack is full!\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("Pushed %d\n", value);
}

// Remove element from stack (pop)
void pop() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Popped %d\n", stack[top]);
    top--;
}

// View top element (peek)
void peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

// Display all elements
void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("=== Simple Stack Operations ===\n");

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push (Add element)\n");
        printf("2. Pop (Remove element)\n");
        printf("3. Peek (View top element)\n");
        printf("4. Display stack\n");
        printf("5. Check if empty\n");
        printf("6. Check if full\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;

            case 6:
                if (isFull()) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
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
