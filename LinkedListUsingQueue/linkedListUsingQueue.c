#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
} *front = NULL, *rear = NULL;

int peek();
void insert(int item);
int del();
int isEmpty();
void display();


int main() {
    int choice,item;
    while(1) {
        printf("\n1.Insert an Element\n");
        printf("2.Delete an Element\n");
        printf("3. Peek and Element\n");
        printf("4. Display the Queue\n");
        printf("5. EXIT\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter the element to be inserted\n");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                 item = del();
                 printf("Item deleted is: %d",item);
                 break;
            case 3:
                 printf("Element at the front is: %d",peek());
                 break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Wrong choice\n");

        }
    }
    return 0;
}

int peek() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        exit(1);
    }
    return front->info;
}

int isEmpty() {
    if (front == NULL)
        return 1;
    else 
        return 0;
}

void insert(int item) {
    struct node* tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    if (tmp == NULL) {
        printf("Memory cannot be allocated\n");
        return;
    }
    tmp->info = item;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->link = tmp;
    rear = tmp;
}

int del() {
    struct node* tmp;
    int item;
    if (isEmpty()) {
        printf("Queue Underflow\n");
        exit(1);
    }
    tmp = front;
    item = front->info;
    front = front->link;
    free(tmp);
    return item;
}

void display() {
    struct node* ptr = front;
    if (isEmpty()) {
        printf("The Queue is Empty\n");
        return;
    }
    while (ptr != NULL) {
        printf("\nElements in the Queue are: %d\n",ptr->info);
        ptr = ptr->link;
    }
    printf("\n\n");
}
