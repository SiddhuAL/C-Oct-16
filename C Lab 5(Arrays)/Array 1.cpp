#include<stdio.h>
int main()
{
	int n;
	printf("How many elements should be present in the array:");
	scanf("%d",&n);
	int i,j,min,max,a[n];
	for(i=0;i<n;i++)
	{
		printf("Give value %d for array:",i+1);
		scanf("%d",&a[i]);
	}
	min = a[0];
	for(j=1;j<n;j++)
	{
		if(a[j-1]<a[j])
		min=a[j-1];
		else min=a[j];
	}
	printf("Minimum value in the array is %d",min);
	max = a[0];
	for(j=1;j<n;j++)
	{
		if(a[j-1]>a[j])
		max=a[j-1];
		else max = a[j];
	}
	printf("\nMaximum value in the array is %d",max);
	return 0;
	
}
