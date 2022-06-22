#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i += 1) // O(n)
		cout << arr[i] << " ";
	cout << endl;
}

void swapAlt(int arr[], int n)
{
	for (int i = 0; i < n; i += 2) // O(n)
	{
		if (i + 1 < n)
			swap(arr[i], arr[i + 1]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter the number of elements in arr: " << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the value in arr: " << endl;
	for (int i = 0; i < n; i += 1) 
		cin >> arr[i];
	swapAlt(arr,n);
	printArray(arr,n);
	return 0;
}