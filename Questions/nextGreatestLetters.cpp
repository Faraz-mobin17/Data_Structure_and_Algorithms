#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	// find the smallest letter greater the target
	char findGreatestLetters(vector<char> &letters, char target) {
		int start = 0;
		int end = letters.size() - 1;

		while (start <= end) {
			int mid = start + (end - start) / 2;

			if (target < letters[mid]) {
				end = mid - 1;
			} else   {
				start = mid + 1;
			} 
		}
		return letters[start % letters.size()];
	}
};

int main() {
	vector<char> l = {'c','f','j'};
	char target = 'c';
	Solution* obj = new Solution;
	char a = obj->findGreatestLetters(l,target);
	cout << a << endl;
	return 0;
}