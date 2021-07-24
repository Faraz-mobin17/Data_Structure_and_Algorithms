// Problem 3: Given a number N, the task is to find the XOR of all numbers from 1 to N.

#include <bits/stdc++.h>
using namespace std;

void xorOfNum(int n)
{
	
	
		if (n % 4 == 0)
			cout << n << endl;
		else if (n % 4 == 1)
			cout << 1<< endl;
		else if (n % 4 == 2)
			cout << (n + 1) << endl;
		else
			cout << 0 << endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		xorOfNum(n);
		
	}
	return 0;
}