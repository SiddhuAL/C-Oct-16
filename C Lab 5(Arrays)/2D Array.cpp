#include<stdio.h>
int main()
{
	int m,n;
	printf("Give no. of rows of matrix:");
	scanf("%d",&m);
	printf("Give no. of columns of matrix:");
	scanf("%d",&n);
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Give value:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Matrix(2D Array):\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
