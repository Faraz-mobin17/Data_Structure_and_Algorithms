#include <iostream>
using namespace std;
// getting the largest number in arr 
int getLargest(int arr[], int n)
{
	int res = 0; // marking the first el as the largest el in arr
	for (int i = 0; i < n; i += 1)
	{
		if (arr[i] > arr[res]) // if larger el found then put it in res
			res = i;
	}
	return res; // return the largest element 
}
// finding the second largest element 
int getSecondLargest(int arr[], int n)
{
	int largest = getLargest(arr,n); // get the largest element 

	int res = -1; // mark the res as -1
	// run the loop and check if the el in arr are != arr[largest] to find second largest number in arr
	for (int i = 0; i < n; i += 1)
	{
		if (arr[i] != arr[largest])
		{
			if (res == -1)
			{
				res = i; // update the res with first index (this will run only first time to mark res = 0)
			}
			else if (arr[i] > arr[res]) 
			{
				res = i;
			}
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {5,8,20,10,12};
	int ans = getSecondLargest(arr,5);
	cout << ans << endl;
	return 0;
}