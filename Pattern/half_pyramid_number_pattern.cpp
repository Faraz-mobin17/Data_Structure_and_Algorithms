#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for ( int i = 1; i < N; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}