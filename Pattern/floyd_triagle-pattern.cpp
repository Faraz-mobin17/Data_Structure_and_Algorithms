#include <iostream>
using namespace std;

int main()
{
    int N,count = 1;
    cin >> N;

    for ( int i = 1; i < N; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
    return 0;
}