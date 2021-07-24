#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n,i,j;
    cin >> n;
 
    for ( i = 1; i <= n; i += 1)
    {
        for (j = 1;  j <= n - i;  j += 1)
            cout << " ";
        for (j = 1; j <= i; j += 1)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
