#include <stdio.h>
#include <conio.h>

struct node {
  int data;
  struct node * next;
};

typedef struct node node;

node * start = NULL;

void display() {
  node *q = start;
  printf("\nCurrent status of Linked List is :");
  while(q != NULL) {
    printf(" %d ",q->data);
    q = q->next;
  }
  printf("\n");
}

int main()
{
  static int x,z,y;

  node *second = NULL;
  node *third = NULL;

  start = (node *)malloc(sizeof(node));
  second = (node *)malloc(sizeof(node));
  third = (node *)malloc(sizeof(node));

  start->data = 10;
  start->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  while(x!=5)
  {
    printf("\n--------- Enter Your Choice ---------\n");
    printf("1.Insert at Beginning of List.\n");
    printf("2.Insert after any node.\n");
    printf("3.Insert at End of List.\n");
    printf("4.Display End of List.\n");
    printf("5.Exit.\n");

    printf("\nYour Choice [1-5] : ");
    scanf("%d",&x);

    switch(x) {
      case 1:
              printf("\nEnter the value of node to insert at begnning : ");
              scanf("%d",&z);
              // pushhead(z);
              break;
      case 2:
              printf("\nEnter the value of node to insert at middle : ");
              scanf("%d",&z);
              printf("\nEnter the value of node after which new node is to be inserted : ");
              scanf("%d",&y);
              // pushmiddle(y,z);
              break;
      case 3:
              printf("\nEnter the value of node to insert at end : ");
              scanf("%d",&z);
              // pushend(z);
              break;
      case 4:
              display();
              break;
      case 5:
              printf("\nExiting terminal!");
              break;
      default:
              printf("\nYou enter wrong choice. Try again!");

    }
  }

  return 0;
}
