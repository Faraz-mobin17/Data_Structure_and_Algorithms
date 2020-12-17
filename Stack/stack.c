#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int item);
int pop();
int peek();
int isFull();
int isEmpty();
void display();

int main()
{
   /* code */
   int choice,item;
   while (1)
   {
      printf("Enter a choice \n");
      printf("1.Push\n");
      printf("2.Pop\n");
      printf("3.Peek\n");
      printf("4.display\n");
      printf("5.exit\n");
      printf("Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
            printf("Enter the items to be pushed \n");
            scanf("%d",&item);
            push(item);
            break;
         case 2:
            item = pop();
            printf("Item popped is %d:\n", item);
            break;
         case 3:
            printf("Item at the top is %d\n", peek());
            break;
         case 4:
            display();
            break;
         case 5:
            exit(1);
         default:
            printf("wrong choice\n");
      }
   }
   return 0;
}

int isEmpty() {
   if (top == -1)
      return 1;
   else 
      return 0;
}

int isFull()
{
   if (top == MAX - 1)
      return 1;
   else 
      return 0;
}

void push(int item)
{
   if (isFull())
   {
      printf("The stack is overflow\n");
      return;
   }
   top += 1;
   stack[top] = item;
}

int pop() 
{
   int item;
   if (isEmpty())
   {
      printf("The stack is underflow\n");
      exit(1);
   }

   item = stack[top];
   top -= 1;
   return item;
}

int peek() {
   if (isEmpty())
   {
      printf("The stack is empty\n");
      exit(1);
   }
   return stack[top];
}

void display() {
   int i;
   if (isEmpty())
   {
      printf("The stack is empty\n");
      return;
   }
   printf("Elements in the stack \n\n");
   
   for (i = top; i >= 0; i -= 1)
   {
      printf("%d\n",stack[i]);
   }
   printf("\n");
}

