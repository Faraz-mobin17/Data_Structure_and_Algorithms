//naive solution
#include <bits/stdc++.h>
using namespace std;

int countbits(int n)
{
    int res = 0;
    while (n > 0) 
    {
        if (n % 2 != 0) // res = res + (n & 1) this can also be done
            res++;
        n /= 2; //n = n >> 1 this can also be done
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans =     countbits(n);
        cout << ans << endl;
    }
    return 0;
}
