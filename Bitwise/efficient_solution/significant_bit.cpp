//Problem 2: Given a number N, find the most significant set bit in the given number
#include <bits/stdc++.h>
using namespace std;


int pos(int n)
{
	return log2(n);
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ans = pow(2,pos(	n));
		cout << ans << endl;
	}
	return 0;
}