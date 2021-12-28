#include <iostream>
using namespace std;


int findPivot(int nums[], int size) 
{
	int start = 0;
	int end = size - 1;
	
	while (start <= end) 
	{
		int mid = start + (end - start) / 2;

		if (mid < end && nums[mid] > nums[mid + 1])  {
			return mid;
		} else if (mid > end && nums[mid] < nums[mid - 1]) {
			return mid - 1;
		} else if (nums[mid] <= nums[start]) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}

int binarySearch(int nums[],int target,int start,int end) {
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (nums[mid] > target) {
			start = mid + 1;
		} else if (nums[mid] < target) {
			end = mid - 1;
		} else {
			return mid;
		}
	}
	return - 1;
}

int search(int nums[],int target, int size) {
	int pivot = findPivot(nums,size);

	if (pivot == -1) {
		return binarySearch(nums,target,0,size - 1);
	} else if (nums[pivot] == target) {
		return pivot;
	} else if (target >= nums[0]) {
		return binarySearch(nums,target,0,pivot - 1);
	} else {
		return binarySearch(nums,target,pivot + 1, size - 1);
	}
}

int main() 
{
	int nums[] = {4,5,6,7,0,1,2};
	int target;
	int size = sizeof(nums) / sizeof(nums[0]);
	cin >> target;
	
	int term = search(nums,target,size);
	cout << term;
	return 0;
}