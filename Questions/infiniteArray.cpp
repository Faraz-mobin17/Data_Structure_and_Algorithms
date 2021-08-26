#include <bits/stdc++.h>
using namespace std;

int findRange(int arr[],int target) {
	// first find the range 
	// first start with a box of size 2
	int start = 0;
	int end = 1;

	// condition  for the target to lie in the rangee
	while (target > arr[end]) {
		int newStart = end + 1;
		// double the box value
		end = end + (end - start + 1) * 2;
		start = newStart;
	}
	return binarySearch(arr,target,start,end);
}

int binarySearch(int arr[], int target, int start, int end) {
	while (start <= end) {
		int mid = start + (end - start )  / 2;

		if (target == arr[mid])
			return mid;
		else if (target < arr[mid]) 
			end = mid - 1;
		else 
			start = mid + 1;
	}
}

int main() {
	int arr[] = {3,5,7,9,10,90,100,130,140,160,170};
	int target = 10;
	cout << findRange(arr,target) << endl;
	return 0;
}