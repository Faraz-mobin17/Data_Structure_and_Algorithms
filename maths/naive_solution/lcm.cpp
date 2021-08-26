// taking the lcm
#include <iostream>
using namespace std;
// naive solution
int lcm(int a, int b)
{
	int res = max(a,b);
	while (1)
	{
		if (a % res == 0 && b % res == 0)
			return res;
		res += 1;
	}
	return res;
}



int main(int argc, char const *argv[])
{
	cout << lcm(4,6) << endl;
	return 0;
}