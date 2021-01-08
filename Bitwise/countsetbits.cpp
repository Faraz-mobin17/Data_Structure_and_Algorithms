// a better solution
#include <bits/stdc++.h>
using namespace std;

int countsetbits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
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
        int answer = countsetbits(n);
        cout << answer << endl;
    }
    return 0;
}
