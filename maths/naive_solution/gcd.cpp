#include <iostream>
using namespace std;
// naive solution

int gcd(int a , int b)
{
	int res = min(a,b);
	while (res > 0)
	{
		if (a % res == 0 && b % res == 0)
			break;
		res--;
	}
	return res;
}

int main(int argc, char const *argv[])
{
	/* code */
	int ans = gcd(15,12);
	cout << ans << endl;
	return 0;
}