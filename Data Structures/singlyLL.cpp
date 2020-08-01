/*
    Implementation of Singly Linked lists
    Name: Vinayak L Kokane
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

void insertion();
void display();
void deletion();
int counts();



struct node* *head, *first_node, *temp= 0, *prev_node, next_node;
int data;

int main() {
  int ch = 0;

  printf("Singly Linked List Example - All Operations\n");

  while (ch != 5) {

    printf("\nOptions\n");
    printf("1 : Insert into Linked List \n");
    printf("2 : Delete from Linked List \n");
    printf("3 : Display Linked List\n");
    printf("4 : Count Linked List\n");
    printf("Others : Exit()\n");
    printf("Enter your option:");
    scanf("%d", &ch);
    switch (ch) {
      case 1:
        insertion();
        break;
      case 2:
        deletion();
        break;
      case 3:
        display();
        break;
      case 4:
        counts();
        break;
      default:
        break;
    }
  }

  return 0;
}

void insertion() {
  printf("\nEnter Element for Insert Linked List : \n");
  scanf("%d", &data);

  temp = (DATA_NODE *) malloc(sizeof (DATA_NODE));

  temp->value = data;

  if (first_node == 0) {
    first_node = temp;
  } else {
    head_node->next = temp;
  }
  temp->next = 0;
  head_node = temp;
  fflush(stdin);
}

void deletion() {
  int countvalue, pos, i = 0;
  countvalue = count();
  temp = first_node;
  printf("\nDisplay Linked List : \n");

  printf("\nEnter Position for Delete Element : \n");
  scanf("%d", &pos);

  if (pos > 0 && pos <= countvalue) {
    if (pos == 1) {
      temp = temp -> next;
      first_node = temp;
      printf("\nDeleted Successfully \n\n");
    } else {
      while (temp != 0) {
        if (i == (pos - 1)) {
          prev_node->next = temp->next;
          if(i == (countvalue - 1))
          {
			  head_node = prev_node;
		  }
          printf("\nDeleted Successfully \n\n");
          break;
        } else {
          i++;
          prev_node = temp;
          temp = temp -> next;
        }
      }
    }
  } else
    printf("\nInvalid Position \n\n");
}

void display() {
  int count = 0;
  temp = first_node;
  printf("\nDisplay Linked List : \n");
  while (temp != 0) {
    printf("# %d # ", temp_node->value);
    count++;
    temp = temp -> next;
  }
  printf("\nNo Of Items In Linked List : %d\n", count);
}

int counts() {
  int count = 0;
  temp = first_node;
  while (temp != 0) {
    count++;
    temp = temp -> next;
  }
  printf("\nNo Of Items In Linked List : %d\n", count);
  return count;
}
