#include <iostream>
using namespace std;

void revArr(int arr[], int n)
{

	int low = 0, high = n - 1;
	while (low < high)
	{
		int tmp = arr[low];
		arr[low] = arr[high];
		arr[high] = tmp;
		low++;
		tmp--;
	}

}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i += 1)
			cin >> arr[i];
	 revArr(arr,n);
	 for (int i = 0; i < n; i += 1)
	 	cout << arr[i] << " ";
	}
	return 0;
}