#include <iostream>
using namespace std;

// create a function getLargest 

int getLargest(int arr[], int size)
{
	// mark the first element as the largest element in arr
	int res = 0;
	// compare all the element in arr with the first element 
	for (int i = 0; i < size; i +=1 )
	{ // if found greater then update the first element else move forward
		if (arr[i] > arr[res])
			res = i;
	}
	return arr[res];
	
}

int main() {
	int arr[] = {5,8,20,10};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << getLargest(arr,size) << endl;
	return 0;
}