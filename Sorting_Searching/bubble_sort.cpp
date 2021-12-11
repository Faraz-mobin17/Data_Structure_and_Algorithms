#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
	for (int i = 0; i < n; i += 1) 
	{
		for (int j = 0; j < n - i; j += 1) 
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j],arr[j+1]);
		}
	}

}

int main() {
	vector<int> arr = {6,2,8,4,10};
	
	cout << bubbleSort(arr,5);
	return 0;
}