#include <iostream>
using namespace std;

int fact(int n) 
{
	int fact = 1;
	for (int i = 1; i <= n; i += 1) 
		fact *= i;
	return fact;
}


int ncr(int n,int r)
{
	int num = fact(n);
	int denom = fact(r) * fact(n - r);
	return num / denom;
}

int main(int argc, char const *argv[])
{
	/* code */
	int n,r;
	cout << "Enter the value of N and R" << endl;
	cin >> n >> r;
	cout << "Answer: " << ncr(n,r) << endl;
	return 0;
}