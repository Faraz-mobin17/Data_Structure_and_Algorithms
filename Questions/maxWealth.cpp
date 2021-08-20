#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    	// person = row
    	// account = col
    	int max = 0;
    	for (int i = 0; i < accounts.size(); i += 1)
    	{
    		int sum = 0;
    		for (int j = 0; j < accounts[i].size(); j += 1)
    		{
    			sum += accounts[i][j];
    		}
    		if (max < sum)
    			max = sum;
    	}
    		return max;
    }
    
};

int main() {
	Solution* obj = new Solution;

	vector<vector<int>> nums = {
		{1,2,3},
		{3,2,1},
	};
	int ans = obj->maximumWealth(nums);
	cout << ans << endl;
	return 0;
}