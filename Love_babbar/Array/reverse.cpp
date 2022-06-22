#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[4] = {2,7,5,9};
	int start = 0;
	int end = 3;
	while (start <= end) {
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	for (int i = 0; i < 4; i += 1)
		cout << arr[i];
	return 0;
}
