#include<stdio.h>
int main()
{
	int m,n;
	printf("Give no. of rows of matrix:");
	scanf("%d",&m);
	printf("Give no. of columns of matrix:");
	scanf("%d",&n);
	printf("For A Matrix:\n");
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
	printf("The A Matrix(2D Array):\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nFor B Matrix:\n");
	int b[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Give value:");
			scanf("%d",&b[i][j]);
		}
	}
	printf("The B Matrix(2D Array):\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nC matrix is the addition of A and B.\nC Matrix :\n");
	int c[m][n]={};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
