#include <iostream>
using namespace std;

int sum(int arr[], int N) {
	int sum = 0;
	for (int i = 0; i < N; i += 1)
		sum += arr[i];
	return sum;
}

int main(int argc, char const *argv[])
{
	int N;
	cout << "Enter the size of the arr: " << endl;
	cin >> N;
	int arr[N];
	cout << "Enter the value in arr: " << endl;
	for (int i = 0; i < N; i +=1 ) {
		cin >> arr[i];
	}
	cout << sum(arr,N) << endl;
	return 0;
}