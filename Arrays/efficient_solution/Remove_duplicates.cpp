#include <iostream>
using namespace std;

int removeDuplicate(int arr[],int n)
{
	int res = 1;
	for (int i = 1; i < n; i += 1)
	{
		if (arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;

      cout<<"Before Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       n = removeDuplicate(arr, n);

       cout<<"After Removal"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
	return 0;
}