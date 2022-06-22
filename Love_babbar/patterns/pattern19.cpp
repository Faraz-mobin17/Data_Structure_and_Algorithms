#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        int star = n - i + 1;
        while (j <= star) {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}