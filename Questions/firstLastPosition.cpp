#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// find the smallest letter greater the target
	 vector<int> searchRange(vector<int>& nums, int target) {
	 	// O(n)
	 	vector<int> ans;
	 	bool found = false;
	 	bool found2 = false;
        for (int i = 0; i < nums.size(); i += 1) {
        	if (target == nums[i]) {
        		ans.push_back(i);
        		found = true;
        		break;
        	}
        }
        for (int j = nums.size(); j > 0; j--) {
        	if (target == nums[j]) {
        		ans.push_back(j);
        		found2 = true;
        		break;
        	}
        }
        if (found == false && found2 == false) {
        	ans = {-1,-1};
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