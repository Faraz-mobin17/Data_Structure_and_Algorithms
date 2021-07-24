#include <iostream>
using namespace std;

int getLargest(int arr[], int n)
{
	for (int i = 0; i < n; i += 1)
	{
		bool flag = true; // considering the first element as the largest elment
		for (int j = 0; j < n; j += 1) // comparing every ith element with jth element
		{
			if (arr[j] > arr[i])
			{
				flag = false; // if jth element is largest set the flag to false 
				break; // break the loop;
			}
		}
		if (flag) return arr[i]; // if found the largest element returns its index
	}
	return -1;
}

int main() {
	int arr[] = {5,8,20,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << getLargest(arr,n) << endl;
	return 0;
}