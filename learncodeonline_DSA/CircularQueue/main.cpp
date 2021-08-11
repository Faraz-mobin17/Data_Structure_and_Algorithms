#include <iostream>
using namespace std;

class Queue 
{
public:
    int rear, front, size;
    int *arr;

    public : Queue(int s) 
    {
        front = rear - 1;
        size = s;
        arr = new int[s];
    }

    public : void enqueue(int data) 
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is already full" << endl;
            return;
        }
        else if (front == -1) 
        {
            front = rear = 0;
            arr[rear] = data;
        } 
        else {
            rear++;
            arr[rear] = data;
        }
    }
    int deQueue() 
    {
        if (front == -1) 
        {
            cout << "Queue is empty\n" << endl;
            return -1;
        }
        int data = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        } 
        else if (front == size - 1)
        {
            front = 0;
        }
        else 
        {
            front++;
        }
        return data;
    }
};


int main() {
    return 0;
}