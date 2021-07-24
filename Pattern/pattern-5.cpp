#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for ( int i = 1; i < N; i += 1)
    {
        for (int j = N; j > i; j -= 1)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}