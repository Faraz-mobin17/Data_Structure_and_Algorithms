#include <iostream>
#define MAX 10
using namespace std;

int stack[MAX];
int top = -1;
int peek();
int pop();
void push(int item);
int isEmpty();
int isFull();
void display();
int main()
{
    int choice, item;
    while (1) 
    {
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. Display the top element " << endl;
        cout << "4. Display all the elements: " << endl;
        cout << "5. Quit" << endl;
        cin >> choice;
        switch (choice) 
        {
            case 1:
                cout << "Enter the element to push in stack " << endl;
                cin >> item;
                push(item);
                break;
            case 2: 
                item = pop();
                cout << "Pop the element from the stack " << endl;
                cout << "Popped item from the stack is: " << item << endl;
                pop();
                break;
            case 3:
                cout << "Display the top element from the stack " << endl;
                cout <<  peek() << endl;
                break;
            case 4: 
                cout << "Display all the elements " << endl;
                display();
                break;
            case 5:
                exit(1);
                break;
            default: 
                cout << "Wrong choice" << endl;
            
        }
    }
    return 0;
}

int peek()
{
    if (isEmpty())
    {
        cout << "Stack is Underflow" << endl;
        exit(1);
    }
    else 
        return stack[top];
}

int pop()
{
    int item;
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
        exit(1);
    }
        item = stack[top];
        top--;
        return item;
   
}

void push(int item) 
{
    if (isFull())
    {
        cout << "Stack is overflow" << endl;
        return;
    }
    else 
    {
        top++;
        stack[top] = item;
    }
}

int isFull() 
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty() 
{
    if (top == -1)
        return 1;
    else 
        return 0;
}

void display() 
{
    int i;
    if (isEmpty())
    {
        cout << "Stack is empty no item to display: " << endl;
        return;
    }
    cout << "Elements in stack: " << endl;
    for (i = top; i >= 0; i -= 1)
        cout << stack[i] << endl;
}