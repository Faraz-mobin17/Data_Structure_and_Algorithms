#include <iostream>
using namespace std;

void Divisor(int n)
{
        for (int i = 1; i <= n; i += 1)
                if (n % i == 0)
                        cout << i << endl;
}

int main() 
{
        int n;
        cin >> n;
        Divisor(n);
        return 0;
}
