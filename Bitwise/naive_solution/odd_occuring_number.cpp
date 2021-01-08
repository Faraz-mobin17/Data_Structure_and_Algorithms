// naive solution for odd occuring number
#include <iostream>
using namespace std;

void checkOdd(int arr[],int n)
{
	
	int count = 0;
	for (int i = 0; i < n; i += 1)
	{
		for (int j = 0; j < n; j += 1)
			if (arr[j] == arr[i])
				count++;
		if (count % 2 != 0)
			cout << arr[i] << endl;
	}
		
}

int main(int argc, char const *argv[])
{
	/* code */

	int t;
	cin >> t;
	while (t--)
	{
		int arr[] = {4,3,4,4,4,5,5};
		int n;
		cin >> n;
		checkOdd(arr,n);
	}
	return 0;
}