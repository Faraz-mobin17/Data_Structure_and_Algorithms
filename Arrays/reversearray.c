#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i,j,temp,arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (i = 0, j = 9; i < j; i += 1, j -= 1)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	printf("After reversing, the array is: ");
	for (i = 0; i < 10; i += 1)
	{
		printf("%d \n", arr[i]);
	}
	printf("\n");
	return 0;
}