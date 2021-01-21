#include <iostream>
using namespace std;

int set(int n, int k)
{
	n = (n | (1 << k))
	return n;
}

int unset(int n, int k)
{
	n = (n & ~(1 << k));
	return n;
}

int toggle(int n, int k)
{
	n = (n ^ (1 << k));
	return n;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin >> n >> k;
		int ans = set(n,k);
		cout << ans << endl;
	}
	return 0;
}