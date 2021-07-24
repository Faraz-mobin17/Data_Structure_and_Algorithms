#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < n - i; j += 1)
        {
            cout << " ";
        }
        for (int k = 0; k < n; k += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}