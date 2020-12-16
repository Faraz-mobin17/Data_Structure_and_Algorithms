// count the number of trailing zeros in the program

#include <iostream>
#include <cmath>
using namespace std;

//here time complexity is thetha (logn)
int countZeros(int N)
{
	int res = 0;
	for (int i = 5; i <= N; i *= 5)
		res = res + floor(N / i);
	return res;
}

int main(int argc, char const *argv[])
{
	/* code */
	int N;
	cin >> N;
	int ans = countZeros(N);
	cout << ans << endl;
	return 0;
}