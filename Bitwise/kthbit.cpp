#include <bits/stdc++.h>
using namespace std;
//.note : to check with right shift use this as a condition if (((n >> (k - 1)) & 1) == 1) 
void checkKthBit(int n, int k)
{
    if (n & (1 << (k - 1) != 0))
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k;
        cin >> k;
        checkKthBit(n,k);
    }
    return 0;
}
