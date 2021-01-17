#include <bits/stdc++.h>
using namespace std;


unsigned int getFirstSetBits(int n)
{
	// if (n & 1)
	// 	return 1;
	// return log2(n & -n) + 1;
	int res = 0;
	while (n > 0)
	{
		if (n % 2 != 0)
		{
			res++;
			break;
		}
		n = n / 2;
	}
	return res;
}

int main(int argc, char const *argv[])
{
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		printf("%u\n", getFirstSetBits(n));
	}
	return 0;
}