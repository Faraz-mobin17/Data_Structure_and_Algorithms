#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

bool isPrime(int n) {
        if (n == 1 || n == 0)
                return false;
        for (int i = 2; i * i <= n; i += 1)
                if (n % i == 0)
                        return false;
        return true;
}

void sieve(int n) {
        vector<bool> isPrime(n + 1,true);
        for (int i = 2; i * i <= n; i += 1) 
        {
                if (isPrime[i]) {
                        for (int j = 2 * i; j <= n; j = j + i)
                        {
                                isPrime[i] = false;
                        }
                }
        }

        for (int i = 2; i <= n; i += 1)
                if (isPrime[i])
                        cout << i << " ";
}

int main() {

        return 0;
}
