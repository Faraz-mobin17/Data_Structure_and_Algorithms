#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int temp,n,lastDigit,reverseNumber=0;
	cout << "Enter a number to check wheather it is palindrome or not" << endl;
	cin >> n;
	temp = n;
	while (n > 0)
	{
		lastDigit = n % 10;
		reverseNumber = reverseNumber * 10 + lastDigit;
		n /= 10;
	}
	if (reverseNumber == temp)
	{
		cout << "The number is palindrome" << endl;
	}
	else {
		cout << "THe number is not palindrome" << endl;
	}
	return 0;
}