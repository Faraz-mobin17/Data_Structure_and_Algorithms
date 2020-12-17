#include <stdio.h>
#include <stdlib.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
int main(int argc, char const *argv[])
{
	// code
	int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
	int i,j,k;
	printf("Enter the element in the matrix mat1(%dx%d) row-wise : \n",ROW1,COL1);
	for (i = 0; i < ROW1; i += 1)
	{
		for (j = 0; j < COL1; j += 1)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the element in the matrix mat2(%dx%d) row-wise : \n",ROW2,COL2);
	for (i = 0; i < ROW2; i += 1)
	{
		for (j = 0; j < COL2; j += 1)
		{
				scanf("%d", &mat2[i][j]);	
		}
	}
	// multiplication of two matrices
	for ( i = 0; i < ROW1; i += 1)
	{
		for (j = 0; j < COL2; j += 1)
		{
			mat3[i][j] = 0;
			for (k = 0; k < COL1; k += 1)
			{
				mat3[i][j] += mat1[i][j] * mat2[i][j];	
			}
		}
	}
	printf("The resultant matrix mat3 is : \n");
	for ( i = 0; i <ROW1; i += 1 )
	{
		for (j = 0; j < COL2; j += 1)
		{
			printf("%d\n", mat3[i][j]);
		}
		printf("\n");	
	}
	return 0;
}