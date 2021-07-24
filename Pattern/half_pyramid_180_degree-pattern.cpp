#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            if ( j < n - i )
                cout << " ";
            else 
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}