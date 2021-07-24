#include <iostream>
using namespace std;
// note in this question arr will be always sorted.
int removeDuplicate(int arr[], int n)
{
	int tmp[n];
	tmp[0] = arr[0];
	int res = 1;
	for (int i = 1; i < n; i += 1)
	{
		if (tmp[res - 1] != arr[i])
		{
			tmp[res] = arr[i];
			res++;
		}
	}
	for (int i = 0; i < res; i += 1)
		arr[i] = tmp[i];
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