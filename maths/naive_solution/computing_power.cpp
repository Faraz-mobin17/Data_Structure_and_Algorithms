#include <iostream>
using namespace std;

int power(int n , int x) {
        int res = 1;
        for (int i = 1; i <= n; i += 1)
                res = res * x;
        return res;
}

int main() {
        cout << "Enter the number and the times to compute power" << endl;
        int n,x;
        cin >> n >> x;
        int ans = power(n,x);
        cout << ans << endl;
        return 0;
}
