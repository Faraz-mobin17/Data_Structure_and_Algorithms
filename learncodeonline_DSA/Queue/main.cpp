#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> q) 
{
    while (!q.empty())
    {
        cout << "\n" << q.front() << endl;
        q.pop();
    }

}


int main(int argc, char const *argv[])
{
    /* code */
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    printQueue(q);
    cout << q.size() ;
    cout << endl;
    cout << q.front();
    cout << endl;
    cout << q.back();
    return 0;
}
