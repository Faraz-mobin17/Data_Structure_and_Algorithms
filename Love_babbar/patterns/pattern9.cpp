#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        
        int j = 1;
        while (j <= i)
        {
            cout << (i - j + 1) << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    
    return 0;
}