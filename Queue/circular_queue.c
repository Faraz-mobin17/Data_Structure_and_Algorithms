#include <stdio.h>
#include <stdlib.h>
#define max 10

int circular_queue[max];
int front = -1;
int rear = -1;
void insert(int item);
int peek();
int isEmpty();
int isFull();
void display();
int del();


int main() {
    int choice,item;

    while (1) 
    {
        printf("1. Insert Item in a Circular Queue\n");
        printf("2. Delete Item in Circular Queue\n");
        printf("3. See the Item at the Front\n");
        printf("4. Display the Item\n");
        printf("5. EXIT\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice) 
        {
            case 1:
                printf("Enter the item to Insert in the Queue\n");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                item = del();
                printf("Item deleted is : %d",item);
                break;
            case 3:
                printf("Item at the Front is: %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}

void insert(int item) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    if (rear == max - 1)
        rear = 0;
    rear++;
    circular_queue[rear] = item;
}

int del() {
    if (isEmpty()) {
        printf("Queue is Underflow \n");
        exit(1);
    }
    int item = circular_queue[front];
    if (front == rear)
        front = rear = -1;
    else if (front == max - 1)
        front = 0;
    else
        front++;
    return item;

}

int peek() {
    if (isEmpty()) {
        printf("Queue is Underflow\n");
        exit(1);
    }
    return circular_queue[front];
}

int isEmpty() {
    if (front == -1)
        return 1;
    else 
        return 0;
}

int isFull() {
    if ((front == 0 && rear == max - 1) || (front == rear + 1))
        return 1;
    else 
        return 0;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements in Queue are: \n");
    i = front;
    if (front <= rear)
        while (i <= rear)
            printf("%d\t",circular_queue[i++]);
    else 
    {
        while (i <= max -1)
            printf("%d\t",circular_queue[i++]);
        i = 0;
        while ( i <= rear )
            printf("%d\t",circular_queue[i++]);
        printf("\n");
    }
}
