#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("Give n value(No. of rows in the pattern):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
