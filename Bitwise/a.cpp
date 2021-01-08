#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
     int res = 0;
    for (int i = 1; i <= n; i += 1) {
	while (i > 0)
	{
          i &= (i - 1);
          res++;
	}
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
        int answer = count(n);
	cout << answer << endl;
    }
    return 0;
}
