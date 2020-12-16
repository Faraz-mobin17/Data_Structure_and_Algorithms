// to check the number is prime or not
#include <iostream>
using namespace std;
// naive approach
bool isPrime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i < n; i += 1)
		if (n % i == 0)
			return false;
		return true;
}



int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}