#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    int ch = 64;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << char(ch + count);
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}