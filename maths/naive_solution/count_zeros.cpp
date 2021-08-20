// count the number of trailing zeros in the program
#include <iostream>
#include <cmath>
using namespace std;
// time complexity is thetha (n)
int countZeros(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact = fact * i;
	
	int res = 0;
	while (fact % 10 == 0)
	{
		res++;
		fact /= 10;
	}
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