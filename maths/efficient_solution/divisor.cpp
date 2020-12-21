#include <iostream>
#include <cmath>
using namespace std;

void divisor(int n) {
        int i;
        for (i = 1; i <= sqrt(n); i += 1)
                if (n % i == 0) {
                        cout << i << endl;
                }
        for (; i >= 1;i--)
                if (n % i == 0)
                        cout << n/i << endl;
}

int main() {
        int n;
        cin >> n;
        divisor(n);
        return 0;
}
