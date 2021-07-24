#include <bits/stdc++.h>
using namespace std;

int grey(int n)
{
    if (n == 0)
        return 0;
    else
        return n & ( n >> 1 );
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = grey(n);
        cout << ans << endl;
    }
}
