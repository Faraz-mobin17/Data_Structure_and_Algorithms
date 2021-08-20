#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
    	int res = 0;
    	for (int i = 0; i < nums.size(); i += 1)
    		if(countNumbers(i) % 2 == 0)
    			res++;

    	return res;
    }

    int countNumbers(int num) {
    	int count = 0;
    	while (num > 0 ) {
    		count++;
    		num /= 10;
    	}
    	return count;
    }
 
};

int main() {
	int arr[] = {12,345,2,6,7896,1234 };
	int n = sizeof(arr[0] / sizeof(arr));
	vector<int> nums(arr,arr+n);

	Solution *obj = new Solution;
	
	int a = obj->findNumbers(nums);
	cout << a << endl;
	
	return 0;
}