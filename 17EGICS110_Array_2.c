#include<stdio.h>
void main()
{
	int n,i,mid,sum=0,sum1=0;
	int arr[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    mid = n/2;
    for(i=0;i<mid;i++)
    {
		sum = sum+arr[i];
    }
	for(i=mid;i<=n;i++)
	{
		sum1+=arr[i];
	}
    if(sum<sum1)
    {
		printf("%d",sum);
	}
    else
    {
		printf("%d",sum1);
	}
} 
