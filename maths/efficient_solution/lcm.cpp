// taking the lcm
#include <iostream>
using namespace std;


//efficient solution

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b,a%b);
}

int lcm(int a, int b)
{
	return ( a * b ) / gcd(a,b);
}

int main(int argc, char const *argv[])
{
	cout << lcm(4,6) << endl;
	return 0;
}