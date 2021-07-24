#include <iostream>
using namespace std;

void insertAtIndex(int arr[],int sizeOfArray, int index,int element)
{
	if (index == sizeOfArray - 1)
		arr[index] = element;
	for (int i = sizeOfArray - 1; i >= index; i -= 1)
		arr[i + 1] = arr[i];
	arr[index] = element;
}

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int sizeOfArray;
		cin >> sizeOfArray;
		int arr[sizeOfArray];
		for (int i =0; i < sizeOfArray - 1; i += 1)
			cin >> arr[i];
		int index;
		cin >> index;
		int element;
		cin >> element;

		insertAtIndex(arr,sizeOfArray,index,element);
		for (int i = 0; i < sizeOfArray; i += 1)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}