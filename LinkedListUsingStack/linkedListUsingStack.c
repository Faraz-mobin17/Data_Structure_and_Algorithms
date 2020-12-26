#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
} *top = NULL;
void push(int item);
int pop();
int peek();
void display();
int isEmpty();

int main() {
    int choice,item;
    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter the element to be pushed\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                item = pop();
                printf("Popped item is: %d",item);
                break;
            case 3:
                printf("Item at the top is %d",peek());
                break;
            case 4:
                printf("Display all the item on the stack\n");
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("wrong choice");
        }
    }
    return 0;
}

void push(int item) {
    struct node* tmp;
    if (tmp == NULL) {
        printf("Stack is overflow\n");
        return;
    }
    tmp->data = item;
    tmp->link = top;
    top = tmp;
}

int pop() {
    struct node* tmp;
    int item;
    if (isEmpty()) {
        printf("Stack underflow\n");
        return;
    }
    tmp = top;
    item = tmp->data;
    top = top->link;
    free(tmp);
    return item;
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        exit(1);
    }
    return top->data;
}

int isEmpty() {
    if (top == NULL)
        return 1;
    else
        return 0;
}

void display() {
    struct node* ptr = top;
    if (isEmpty()) {
        printf("Stack is empty no idea to display\n");
        return;
    }
    printf("Stack elements are: \n");
    while (ptr != NULL) {
        printf("Elements of the stack are: %d\n",ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
