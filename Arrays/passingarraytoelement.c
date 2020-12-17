#include <stdio.h>
#include <stdlib.h>

void check(int num);
int main(int argc, char const *argv[])
{
	/* code */
	int arr[10],i;
	for ( i = 0; i <= 9; i += 1)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	return 0;
}

void check(int num)
{
	if (num % 2 == 0)
	{
		printf("The number is even\n",num);
	} else {
		printf("The number is odd\n",num);
	}
}