#include <bits/stdc++.h>
using namespace std;
int table[256];
void init() 
{
    table[0] = 0;
    for (int i = 0; i < 256; i += 1)
        table[i] = (i & 1) + table[i / 2];
}
int count(int n) 
{
    int res = table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n >> 8;
    res += table[n & 0xff];
    n >> 8;
    res += table[n & 0xff];
    return res;
}

int main() {
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int answer = count(n);
        cout << answer << endl;
    }
    return 0;
}
