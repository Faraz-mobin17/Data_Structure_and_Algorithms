//prime factor
#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i < n; i += 1)
		if (n % i == 0)
			return false;
	return true;
}

void primeFactors(int n)
{
	for (int i = 2; i < n; i += 1)
	{
		if (isPrime(i))
		{
			int x = i;
			while (n % x == 0)
			{
				cout << i << endl;
				x = x * i;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int N;
	cin >> N;
	primeFactors(N);
	return 0;
}
