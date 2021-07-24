#include <iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray,int element)
{
	//maximum el sizeofel
	//sizeofel-1 (last)
	arr[sizeOfArray-1] = element;


}

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int sizeOfArray;
		cin >> sizeOfArray;
		int arr[sizeOfArray];
		for (int i = 0; i < sizeOfArray-1;i++)
			cin >> arr[i];
		int element;
		cin >> element;
		insertAtEnd(arr,sizeOfArray,element);
		for (int i = 0; i < sizeOfArray; i+= 1)
			cout << arr[i] << endl;
		cout << endl;
	}
	return 0;
}