#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *head = NULL;

void insertAtBegin(int data) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));

  newNode->data = data;
  newNode->next = head;
  head = newNode;

  return;
}

void insertAtPos(int data, int pos) {

  if (pos <= 0) {
    printf("Invalid position");
    return;
  }

  struct node *newNode = (struct node *)malloc(sizeof(struct node));

  newNode->data = data;

  if (pos == 1) {

    newNode->next = head;
    head = newNode;

    return;
  }
  struct node *temp = head;
  for (int i = 1; i < pos - 1; i++) {
    if (temp == NULL) {
      printf("Invalid position");
      free(newNode);
      return;
    }
    temp = temp->next;
  }

  newNode->next = temp->next;
  temp->next = newNode;

  return;
}

void display() {
  struct node *temp = head;

  if (temp == NULL) {
    printf("List is Empty");
    return;
  }

  while (temp != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");

  return;
}
int main() {
  printf("LinkList\n");

  int choice, data, pos;

  while (1) {

    printf("1.insertAtBegin\n2.insertAtPos\n3.display\n4.Exit\n\n");
    printf("Enter ur choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter the ele: ");
      scanf("%d", &data);
      insertAtBegin(data);

      break;
    case 2:
      printf("Enter the ele: ");
      scanf("%d", &data);
      printf("Enter the pos: ");
      scanf("%d", &pos);

      insertAtPos(data, pos);

      break;
    case 3:
      display();
      break;
    case 4:
      printf("Bye!");
      return 0;
    default:
      printf("Enter a valid choice");
      return 0;
    }
  }
  return 0;
}
