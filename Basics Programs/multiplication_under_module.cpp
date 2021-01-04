#include <bits/stdc++.h>
using namespace std;

int multiplicationUnderModulo(long long a, long long b) 
{
    int M = 1000000007;
    return (((a % M) * (b % M)) % M);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        cout << multiplicationUnderModulo(a,b) << endl;
    }
    return 0;
}
