// taking the lcm
#include <iostream>
using namespace std;
// naive solution
int lcm(int a, int b)
{
	int res = max(a,b);
	while (1)
	{
		if (res % a == 0 && res % b == 0)
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