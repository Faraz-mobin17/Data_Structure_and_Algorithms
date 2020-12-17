#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4
int main(int argc, char const *argv[])
{
	
	int i,j,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
	printf("Enter matrix mat1(%dx%d) row-wise :\n",ROW,COL);
	for (i = 0; i < ROW; i += 1)
	{
		for (j = 0; j < COL; j += 1)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
		printf("Enter matrix mat2(%dx%d) row-wise :\n",ROW,COL);
	for (i = 0; i < ROW; i += 1)
	{
		for (j = 0; j < COL; j += 1)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	// addition of two matrices 

	for (i = 0; i < ROW; i += 1)
	{
		for (j = 0; j < COL; j += 1)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("The resultant matrices mat3 is : \n");
	for (i = 0; i < ROW; i += 1)
	{
		for (j = 0; j < COL; j += 1)
		{
			printf("%d\n", mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}