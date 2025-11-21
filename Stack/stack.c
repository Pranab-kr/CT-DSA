#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int element) {
    if (top == MAX - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = element;
    printf("%d pushed onto the stack.\n", element);
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return -1;
    }
    int poppedElement = stack[top--];
    printf("%d popped from the stack.\n", poppedElement);
    return poppedElement;
}

// Function to peek at the top element of the stack
int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];
}

// Function to display the elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, element;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                element = peek();
                if (element != -1) {
                    printf("Top element is %d\n", element);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}