#include <iostream>
using namespace std;

int findPivot(int arr[], int size) {
	int start = 0;
	int end = size - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (mid < end && arr[mid] > arr[mid + 1]) {
			return mid;
		}
		if (mid > end && arr[mid] < arr[mid - 1]) {
			return mid - 1;
		}
		if (arr[mid] >= start) {
			end = mid - 1;
		}

		else {
			start = mid + 1;
		}
	}
	return -1;
}

int rotationCount(int arr[], int size) {
	int pivot = findPivot(arr,size);
	return pivot + 1;
}


int main(int argc, char const *argv[])
{
	int arr[] = {4,5,6,7,0,1,2};
	// {0,1,2,3,4,5,6}
	// {4,5,6,0,1,2,3}
	int size = sizeof(arr) / sizeof(arr[0]);

	int rotationCnt = rotationCount(arr,size);
	cout << rotationCnt << endl;
	return 0;
}