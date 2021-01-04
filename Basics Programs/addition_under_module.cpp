#include <bits/stdc++.h>
using namespace std;

long long sumUnderModulo(long long a, long long b) 
{
    long long m = pow(10,9) + 7;
    return ((a % m + b % m) % m);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        cout << sumUnderModulo(a,b) << endl;
    }
    return 0;
}
