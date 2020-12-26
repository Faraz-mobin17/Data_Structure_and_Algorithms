#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue_arr[MAX];
int peek();
void insert(int item);
void display();
int front = -1;
int rear = -1;
int del();
int isEmpty();
int isFull();

int main() {
    int choice,item;
    while(1) {
        printf("1. INSERT\n");
        printf("2. DEL\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter the element to insert in the queue\n");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                item = del();
                printf("Deleted item is: %d\n",item);
                break;
            case 3:
                printf("Item at the front is: %d\n",peek());
                break;
            case 4:
                printf("Displaying the all the item");
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

int isEmpty() {
    if (front == -1 || front == rear + 1)
        return 1;
    else 
        return 0;
}

int isFull() {
    if (rear == MAX - 1) 
        return 1;
    else
        return 0;
}
int peek() {
    if (isEmpty()) {
        printf("QUEUE is empty");
        exit(1);
    }
    return queue_arr[front];
}
void insert(int item) {
    if (isFull()) {
        printf("The queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue_arr[rear] = item;
}
int del() {
    int item;
    if (isEmpty()) {
        printf("Queue is Underflow\n");
        exit(1);
    }
    item = queue_arr[front];
    front++;
    return item;
}

void display() {
    int i;
    if (isEmpty()) {
        printf("The Queue is Empty\n");
        return;
    }
    printf("The items in queue are: \n");
    for (i = front; i <= rear; i += 1)
        printf("%d ",queue_arr[i]);
    printf("\n\n");
}
