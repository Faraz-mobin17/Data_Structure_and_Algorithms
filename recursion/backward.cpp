#include <iostream>
using namespace std;
int call(int n)
{
    if ( n > 0 )
    {
        call(n-1);
        cout << "WOO" << n << endl;
    }
}
int main() {
    int n = 3;
    call(n);
    return 0;
}
