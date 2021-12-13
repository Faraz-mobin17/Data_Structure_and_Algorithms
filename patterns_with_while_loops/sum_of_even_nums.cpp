#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i=0; i <=  n; i += 1) {
		if (i % 2 == 0) 
			sum += i;
	}
	cout << sum;
	return 0;
}