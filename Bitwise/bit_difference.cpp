#include <iostream>
using namespace std;

int countSetBits(int xor_a_b)
{
	 int res = 0;
    while (xor_a_b > 0)
    {
        xor_a_b = (xor_a_b & (xor_a_b - 1));
        res++;
    }
    return res;
}

int countBitsFlip(int a, int b){
    
    // Your logic here
    int xor_a_b = a ^ b;
    int res = countSetBits(xor_a_b);
    return res;
    
}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int a,b;
		cin >> a >> b;
		int ans = countBitsFlip(a,b);
		cout << ans << endl;
	}
	return 0;
}
