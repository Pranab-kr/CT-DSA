#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);

    // If list is empty
    if (head == NULL) {
        newNode->next = newNode;  // Point to itself (circular)
        return newNode;
    }

    // Find the last node
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert at end
    temp->next = newNode;
    newNode->next = head;  // New node points back to head (maintain circular)

    return head;
}

// Display the list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Circular List: ");
    struct Node* temp = head;

    // Print all nodes using a while loop (no do-while)
    // Loop until we reach the last node (whose next points back to head)
    while (temp->next != head) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    // Print the last node and show the circular link back to head
    printf("%d -> (back to %d)\n", temp->data, head->data);
}


int main() {
    struct Node* head = NULL;
    int choice, value;

    printf("=== Interactive Circular Linked List Demo ===\n");

    while (1) {
        printf("\n--- Circular Linked List Operations ---\n");
        printf("1. Insert at end\n");
        printf("2. Display list\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                printf("Inserted %d at end\n", value);
                break;

            case 2:
                display(head);
                break;

            case 3:
                  printf("Exiting program...\n");
                  // Free remaining nodes
                  if (head != NULL) {
                      struct Node* temp = head;
                      struct Node* nodeToDelete;
                      do {
                          nodeToDelete = temp;
                          temp = temp->next;
                          free(nodeToDelete);
                      } while (temp != head);
                  }
                return 0;

            default:
                printf("Invalid choice! Please enter 1-4.\n");
                break;
        }
    }

    return 0;
}
