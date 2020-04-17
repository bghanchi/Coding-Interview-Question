#include<stdio.h>
void main()
{
	int i,n,j,c=0;
	printf("enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				break;
			}
		}
		if(j==n)
		{
			printf("\n Non Repeating element is %d",arr[i]);
		}
	}
}
