#include <stdio.h>
#include <stdlib.h>

void func(int val[]);

int main(int argc, char const *argv[])
{
	/* code */
	int i,arr[6] = {1,2,3,4,5,6};

	for (i = 0; i < 6; i += 1)
	{
		printf("Contents of array are = %d\n", arr[i]);
	}
	func(arr);
	printf("Contents of array are now: ");
	for ( i = 0; i < 6; i += 1)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	return 0;
}

void func(int val[])
{
	int sum = 0,i;
	for ( i = 0; i < 6; i += 1 )
	{
		val[i] *= val[i];
		sum += val[i];
	}
}