#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i ) {
           cout << ch << " ";
            ch++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}