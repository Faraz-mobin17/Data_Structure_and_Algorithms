#include <iostream>
using namespace std;

int getSecondLargest(int arr[], int n)
{
	int res = -1, largest = 0;
	for (int i = 1; i < n; i += 1)
	{
		if (arr[i] > arr[largest])
		{
			res = largest;
			largest = i;
		} 
		else if (arr[i] !== arr[largest])
		{
			if (res == -1 || arr[i] > arr[res])
				res = i;
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,8,20,12};
	int ans = secondLargest(arr,4);
	cout << ans << endl;
	return 0;
}