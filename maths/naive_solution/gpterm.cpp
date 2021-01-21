#include <bits/stdc++.h>
using namespace std;

double termOfGP(int a, int b,int n) 
{
    double r = (double)b/a;
    return (a * pow(r,n-1));
}

int main() {
    int t;
    cin >> t;
    for (int i = 0;i < t; i += 1)
    {
        int a,b,n;
        cin >> a >> b;
        cin >> n;
        cout << floor(termOfGP(a,b,n)) << endl;
    }
    return 0;
}
