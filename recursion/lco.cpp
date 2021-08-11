#include <iostream>
using namespace std;

int call(int n)
{
    if (n > 0)
    {
        cout << "LCO" << n << endl;
        call(n-1);
    } else {
        cout << "Finish" << endl;
    }
}

int main() {
    int n = 3;
    call(n);
    return 0;
}
