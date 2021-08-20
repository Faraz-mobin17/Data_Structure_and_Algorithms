// naive solution

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) 
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

int main() 
{
	int a,b;

	cin >> a >> b;

	int ans = gcd(a,b);

	cout << ans << endl;

	return 0;
}