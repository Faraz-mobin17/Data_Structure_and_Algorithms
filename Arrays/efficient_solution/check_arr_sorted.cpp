#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
	for (int i = 1; i < size; i += 1)
		if (arr[i] < arr[i-1])
			return false;
	return true;
}

int main(int argc, char const *argv[])
{
	int arr[] = {5,6,7,8,9};
	int size = 5;
	int ans = isSorted(arr,size);
	cout << ans << endl;
	return 0;
}