#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    for (int i = 0; i < m; i += 1)
        if ((a * i) % m == 1) 
            return i;
    return -1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,m;
        cin >> a >> m;
        cout << modInverse(a, m) << endl;
    }
    return 0;
}
