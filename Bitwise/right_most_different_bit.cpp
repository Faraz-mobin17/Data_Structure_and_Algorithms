#include <bits/stdc++.h>
using namespace std;

int posOfRightMostSetBit(int n)
{
	return log2(n & -n) + 1;
}

int posOfRightMostDiffBit(int m, int n)
{
	if (m == n)
		return -1;
	return posOfRightMostSetBit(m ^ n);
}

int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		int m,n;
		cin >> m >> n;
		int ans = posOfRightMostDiffBit(m,n);
		cout << ans << endl;
	}
	return 0;
}