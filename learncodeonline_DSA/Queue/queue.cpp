#include <iostream>
#define MAX 10
using namespace std;
int queue_arr[MAX];
int front = -1; // empty queue
int rear = -1; // empty queue

// functions 

void push(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();


int main(int argc, char const *argv[])
{
    /* code */
    int choice, item;
    while (1)
    {
        cout << "1. PUSH" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Peek (Display the element at the first" << endl;
        cout << "4. Display all elements" << endl;
        cout << "5. Exit " << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter the Item to be pushed into the queue" << endl;
                cin >> item;
                push(item);
                break;
            case 2:
                item = del();
                cout << "Item deleted from the Queue is: " << item << endl;
                break;
            case 3:
                cout << "Item at the front is : " << peek() << endl;
                break;
            case 4:
                cout << "Display all the Items " << endl;
                display();
                break;
            case 5:
                exit(1);
                break;
            default: 
                cout << "Wrong choice: " << endl;
        }
    }
    return 0;
}


void push(int item)
{
    if (isFull())
    {
        cout << "Queue is Overflow" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue_arr[rear] = item;
}

int del()
{
    int item;
    if (isEmpty())
    {
        cout << "Queue is Underflow" << endl;
        exit(1);
    }
    item = queue_arr[front];
    front++;
    return item;
}

int peek() 
{
    if (isEmpty()) 
    {
        cout << "Queue is underflow" << endl;
        exit(1);
    }
    return queue_arr[front];
}

void display()
{
    int i;
    if (isEmpty())
    {
        cout << "Queue is empty\n" << endl;
        return;
    }
    cout << "Elements of Queue are: " << endl;
    for (i = front; i <= rear; i += 1)
        cout << queue_arr[i] << endl;
    cout << endl;
}

int isEmpty() 
{
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else    
        return 0;
}

