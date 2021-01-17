#include <bits/stdc++.h>
using namespace std;

int rightMostSetBitPos(int n)
{
	if ( n & 1 )
		return 1;
	return log2(n & -n) + 1;
}

int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int answer = rightMostSetBitPos(n);
		cout << answer << endl;
	}
	return 0;
}