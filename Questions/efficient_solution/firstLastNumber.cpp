#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// find the smallest letter greater the target
	 vector<int> searchRange(vector<int>& nums, int target) {
	 	vector<int> ans = {-1,-1};

	 	int start = search(nums,target,true);
	 	int end = search(nums,target,false);

	 	ans[0] = start;
	 	ans[1] = end;

    }
    int search(vector<int>& nums, int target, bool findStartIndex) {
    	int ans = -1;
    	int start = 0;
	 	int end = nums.size() - 1;

	 	while (start <= end) {
	 		int mid = start + (end - start ) / 2;

	 		if (target < nums[mid]) {
	 			end = mid - 1;
	 		} else if (target > nums[mid]) {
	 			start = mid + 1;
	 		} else {
	 			ans = mid; // potential ans
	 			if (findStartIndex) {
	 				end = mid - 1;
	 			} else {
	 				start = mid + 1;
	 			}
	 		}
	 	}
	 	return ans;
    }	
};

int main() {
	vector<int> nums = {5,7,7,8,8,10};
	vector<int> arrby4;
	int target = 6;
	Solution* obj = new Solution;
	arrby4 = obj->searchRange(nums,target);
	for (int i =0; i < arrby4.size(); i += 1)
	{
		cout << arrby4[i] << " ";
	}


	return 0;
}