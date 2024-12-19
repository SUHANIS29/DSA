// STACK OF IMPLEMENTATION USING ARRAY
#include <stdio.h>
#define max 50
int a[max];
int top = -1;
int i;
int val;
void push();
void pop();
void display();
int main()
{
    int op;
    while (op != 4)
    {
        printf("Menu\n");
        printf("Enter the operation to Perform: \n 1.Push \n2.Pop\n 3.Dispaly\n 4.Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("enter an Element", val);
            scanf("%d", &val);
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("stack is:\n");
            display();
            break;
        case 4:
            printf("exiting");
            break;
        default:
            printf("invalid choice");
        }
    }
    return 0;
}
void push()
{
    if (top == max - 1)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("del is %d", a[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d \n", a[i]);
        }
    }
}