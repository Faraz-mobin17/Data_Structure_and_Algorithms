#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int N)
{
    int temp = arr[0],i;
    for (i = 0; i < N - 1; i += 1)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

void leftRotate(int arr[], int d, int N) 
{
    for (int i = 0; i < d; i += 1)
        leftRotateByOne(arr,N);
}

void printArray(int arr[], int N)
{
    for (int i = 0;i < N; i += 1)
        cout << arr[i] << " ";
}

int main() {
	//code

    int t;
    cin >> t;
    if (t <= 1 || t <= 200)
    {
        while(t--) {
            int N,d;
            cin >> N >> d;
            int arr[N];
            for (int i = 0; i < N; i += 1)
            {
                cin >> arr[i];
            }
            leftRotate(arr,d,N);
            printArray(arr,N);
        }
    }

	return 0;
}

