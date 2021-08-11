#include <iostream>
using namespace std;

int power(int ,int );

int main()
{
    int base, exp, result;
    base = 2;
    exp = 3;
    result = power(base,exp);
    cout << "Result : " << result;
}

int power(int base, int exp)
{
    if (exp != 0)
        return (base * power(base,exp - 1));
    else
        return 1;
}
