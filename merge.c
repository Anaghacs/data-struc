#include<stdio.h>
void main()
{
	int arr1[30],arr2[30],arr3[50],m,n,i,j,k=0;
	printf("Enter the size of the first array:");
	scanf("%d",&m);
	printf("\nEnter the sorted elemenets of first array:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the size of the second array:");
	scanf("%d",&n);
	printf("\nEnter the sorted elemenets of second array:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	i=0;
	j=0;
	while(i<m&&j<n)
	{
		if(arr1[i]<arr2[i])
		{
			arr3[k]=arr2[j];
			j++;
		}
		else
		{
			arr3[k]=arr2[j];
			j++;
		}
			k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
	}
	if(j>=n)
	{
		while(i<m)
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
	}
	printf("\n After merging:\n");
	for(i=0;i<m+n;i++)
	{
		printf("\n%d",arr3[i]);
	}
}
