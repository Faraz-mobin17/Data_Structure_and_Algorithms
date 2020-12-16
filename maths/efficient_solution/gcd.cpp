#include <iostream>
using namespace std;
// optimzied implementaion
int gcd(int a, int b)
{
	if (b == 0) return a;
	else 
		return gcd(b,a%b);
}

//elucidean algorithm (less optimized than above)

// int gcd(int a, int b)
// {
// 	while (a != b)
// 	{
// 		if (a > b)
// 			a = a - b;
// 		else 
// 			b = b - a;
// 	}
// 	return a;
// }




int main(int argc, char const *argv[])
{
	/* code */
	int ans = gcd(15,12);
	cout << ans << endl;
	return 0;
}