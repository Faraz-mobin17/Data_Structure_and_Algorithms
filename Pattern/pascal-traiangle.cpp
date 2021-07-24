#include <iostream>
using namespace std;

int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
    else
       return 1;   
}

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i += 1)
    {
        for (int j = 0; j <= i; j += 1)
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        cout << endl;
    }
    return 0;
}