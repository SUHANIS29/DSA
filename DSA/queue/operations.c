#include <stdio.h>
#define MAX_SIZE 3
int q[MAX_SIZE];
int front = -1;
int rear = -1;
int n = MAX_SIZE;
int element;
int i;
void insert()
{
  printf("enter an element to perform operations:\n");
  if (rear == n)
  {
    printf("Queue is empty\n");
  }
  else
  {
    front = rear = 0;
    q[rear] = element;
    rear++;
  }
}

void delete()
{
  printf("enter an element to perform operations:\n");
  if (rear == -1 && front == -1)
  {
    printf("queue is empty\n");
  }
  else
  {
    element = q[front];
    if (front == rear)
    {
      front = rear = -1;
    }
    else
    {
      front++;
    }
  }
}
void display()
{
  if(rear==-1&&front==-1)
  {
    printf("queue is empty\n");
  }
  else{
    for(i=front;i<rear+1;i++){
      printf("%d",q[i]);
    }
  }
}
void exit(){
  if(rear==n-1){
    printf("exiting");
  }
}
int main()
{
  int choice;
  printf("Queue operations using array\n");
  while (rear != n - 1)
  {
    printf("Enter your choice\n1.Insert an element\n2.Delete an element\n3.Find peek element\n4.Display\n5.exit");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      insert();
    case 2:
      delete ();
    case 3:
      peek();
    case 4:
      display();
    case 5:
      exit();
    default:
      printf("invalid choice");
    }
    printf("\nenter an element to perform operations");
  }
}