// count the number of digit in the given integer 
#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int n)
{
	return floor(log10(n) + 1);
}

int main(int argc, char const *argv[])
{
	// efficient solution
    long long n;
    cout << "Enter digit to count\n";
    cin >> n;
    printf("Number of digits : %d", countDigit(n));

	return 0;
}