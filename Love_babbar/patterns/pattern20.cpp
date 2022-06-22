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
       int space = 0;
       while (space < i - 1) {
        cout << " ";
        space += 1;
       }
       while (j <= n - i + 1) {
        cout << "*";
        j += 1;
       }
       cout << endl;
        i += 1;
    }
    
    return 0;
}