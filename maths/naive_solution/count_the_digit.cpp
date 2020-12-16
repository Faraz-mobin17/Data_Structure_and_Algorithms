// count the number of digit in the given integer 
#include <iostream>
using namespace std;

// recursive

// int countDigit(int n)
// {
// 	if (n == 0)
// 		return 0;
// 	return 1 + countDigit(n / 10);
// }

int main(int argc, char const *argv[])
{
	//naive solution
	
	int digit;
	cout << "Enter the integer you want to count the digit of: " << endl;
	cin >> digit;
	int lastDigit,count = 0;
	while (digit > 0)
	{
		count += 1;
		digit /= 10;
	}
	cout << count << endl;
  

	return 0;
}