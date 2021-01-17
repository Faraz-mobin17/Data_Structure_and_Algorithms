#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i += 1)
		res = res ^ arr[i];
	return res;
}


int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		int arr[] = {4,3,4,4,4,5,5};
		int answer = findOdd(arr,7);
		cout << answer << endl;
	}
	return 0;
}