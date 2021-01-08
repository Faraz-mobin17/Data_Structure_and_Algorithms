// naive solution to check the number is in power of 2

#include <iostream>
using namespace std;

bool isPower(int n)
{
	if (n == 0)
		return false;
	return ((n & (n - 1)) == 0); 

	// the above expression can be written in one line
	// return (n != 0) && ((n & (n - 1)) == 0)
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