#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  
    int N;
    cin >> N;

    for (int i = 1; i <=N; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << "*";
        }
        int space = 2 * N - 2 * i;
        for (int j = 1; j <= space; j += 1)
        {
            cout << " ";
        }
        for (int j = 1; j <=i; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
