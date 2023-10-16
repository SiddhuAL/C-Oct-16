#include<stdio.h>
int main()
{
	int i,j,s,k,n;
	printf("Give a n value(No.of rows in the pattern):");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<i+1;j++)
		printf("%d",j);
		printf("\n");
	}
	return 0;
}
