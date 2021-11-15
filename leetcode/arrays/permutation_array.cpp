#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> ans;
	vector<int> buildArray(vector<int>& nums) {
		for (int i = 0; i < nums.length() - 1; i += 1) {
			ans[i].push_back(nums[nums[i]]);
		}
		return ans;
	}
}

int main() {
	Solution Obj;
	vector<int> nums = [5,0,1,2,3,4];
	vector<int> arr = obj.buildArray(nums);
	for (int i = 0; i < arr.length() - 1; i += 1) {
		cout << arr[i] << " ";
	}

	return 0;
}