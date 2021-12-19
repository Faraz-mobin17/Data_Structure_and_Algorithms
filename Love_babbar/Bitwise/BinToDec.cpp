#include <iostream>
#include <math.h>
using namespace std;
// binary to dec conversion
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int ans = 0;
	int i = 0;
	while (n != 0) {
		int digit = n % 10;
		if (digit == 1) {
			ans = ans * pow(2,i);
		}
		n /= 10;
		i++;
	}
	cout << ans;
	return 0;
}