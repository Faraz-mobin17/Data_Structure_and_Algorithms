// to check the number is prime or not
#include <iostream>
using namespace std;


//optimized approach

// bool isPrime(int n)
// {
// 	if (n == 1)
// 		return false;
// 	for (int i = 2; i * i <= n; i += 1)
// 		if (n % i == 0)
// 			return false;
// 		return true;
// }

//more efficient approach

bool isPrime(int n)
{
	if (n == 1)
		return false;
	if (n == 2 || n == 3)
		return true;
	if (n % 2 == 0 && n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i += 1)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}