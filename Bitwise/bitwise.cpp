#include <bits/stdc++.h>
using namespace std;


bool checkKthBit(int n, int k) {
    if (((1 << k ) & n) == 0)
        return false;
    else 
        return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k;
        cin >> k;
        if (checkKthBit(n,k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
