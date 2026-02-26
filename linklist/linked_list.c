#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
  int data;
  struct Node *next;
};

// Create a new node
struct Node *createNode(int value) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

// Insert at beginning
struct Node *insertAtBeginning(struct Node *head, int value) {
  struct Node *newNode = createNode(value);
  newNode->next = head;
  return newNode;
}

// Insert at end
struct Node *insertAtEnd(struct Node *head, int value) {
  struct Node *newNode = createNode(value);

  if (head == NULL) {
    return newNode;
  }

  struct Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

// Delete a value
struct Node *deleteValue(struct Node *head, int value) {
  if (head == NULL) {
    printf("List is empty!\n");
    return head;
  }

  if (head->data == value) {
    struct Node *temp = head;
    head = head->next;
    free(temp);
    printf("Deleted %d\n", value);
    return head;
  }

  struct Node *temp = head;
  while (temp->next != NULL && temp->next->data != value) {
    temp = temp->next;
  }

  if (temp->next != NULL) {
    struct Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
    printf("Deleted %d\n", value);
  } else {
    printf("Value %d not found\n", value);
  }

  return head;
}

// Display the list
void display(struct Node *head) {
  if (head == NULL) {
    printf("List is empty!\n");
    return;
  }

  printf("List: ");
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Search for a value
void search(struct Node *head, int value) {
  struct Node *temp = head;
  int position = 1;

  while (temp != NULL) {
    if (temp->data == value) {
      printf("Found %d at position %d\n", value, position);
      return;
    }
    temp = temp->next;
    position++;
  }
  printf("Value %d not found\n", value);
}

int main() {
  struct Node *head = NULL;
  int choice, value;

  printf("=== Interactive Linked List Demo ===\n");

  while (1) {
    printf("\n--- Linked List Operations ---\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Delete a value\n");
    printf("4. Search for a value\n");
    printf("5. Display list\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");

    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter value to insert at beginning: ");
      scanf("%d", &value);
      head = insertAtBeginning(head, value);
      printf("Inserted %d at beginning\n", value);
      break;

    case 2:
      printf("Enter value to insert at end: ");
      scanf("%d", &value);
      head = insertAtEnd(head, value);
      printf("Inserted %d at end\n", value);
      break;

    case 3:
      printf("Enter value to delete: ");
      scanf("%d", &value);
      head = deleteValue(head, value);
      break;

    case 4:
      printf("Enter value to search: ");
      scanf("%d", &value);
      search(head, value);
      break;

    case 5:
      display(head);
      break;

    case 6:
      printf("Exiting program...\n");
      // Free remaining nodes
      while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
      }
      return 0;

    default:
      printf("Invalid choice! Please enter 1-6.\n");
      break;
    }
  }

  return 0;
}
