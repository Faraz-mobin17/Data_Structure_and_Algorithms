#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) 
{
    while (!s.empty())
    {
        cout << "\n" << s.top();
        s.pop();
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(8);
    printStack(s);
    s.pop();
    printStack(s);
    cout << "Size is : " << s.size();
    return 0;
}
