#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char(i + j - 2 + ch) << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}