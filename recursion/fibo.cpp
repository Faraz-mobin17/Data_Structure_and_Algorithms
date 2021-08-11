#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num == 1 || num == 0)
        return num;
    else
        return fibo(num-1) + fibo(num-2);
}

int main() 
{
    int num,i=0,sum=0;
    num = 6;
    while (i < num)
    {
        cout << " " << fibo(i) << endl;
        sum += fibo(i);
        i++;
    }
    cout << "Sum of Fibo series:";
    cout << sum << endl;
    return 0;
}
