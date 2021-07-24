#include <iostream>
using namespace std;

int search(int arr[], int N, int X)
{
	for (int i = 0; i < N; i += 1)
		if (arr[i] == X)
			return i;
	return -1;
}

int main()
{
	int testcases;
	cin >> testcases;
	while(testcases--)
	{
		int sizeOfArray;
		cin >> sizeOfArray;
		int arr[sizeOfArray];
		int x;
		for (int i = 0; i < sizeOfArray; i += 1)
			cin >> arr[i];
		cin >> x;
		cout << search(arr,sizeOfArray,x) << endl;
	}	
	return 0;
}