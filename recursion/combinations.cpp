#include <iostream>
using namespace std;

int fact(int num)
{
    if (num <= 1)
        return num;
    else 
        return num * fact(num - 1);
}

int combi(int n, int r)
{
    return ( fact(n) / (fact(r) * fact(n-r)) );
}

int main()
{
    int n = 5, r = 3;
    cout << combi(n,r) << endl;
    return 0;
}
