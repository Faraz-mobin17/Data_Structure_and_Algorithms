#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    char start = 'A';
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << start << " ";
            start++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}