// naive solution to check the number is in power of 2

#include <iostream>
using namespace std;

bool isPower(int n)
{
	if (n == 0) return false;
	while (n != 1)
	{
		if (n % 2 != 0)
			return false;
		n /= 2;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)	
	{
		int n;
		cin >> n;
		int answer = isPower(n);
		cout << answer << endl;
	}

	return 0;
}