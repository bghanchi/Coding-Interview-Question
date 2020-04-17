#include<stdio.h>
int main()
{
	int n,i,j,sum=0,sum1=0;
	printf("Enter size of the array(in even number)");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		sum= sum + a[i];
	}
	for(j=(n/2);j<n;j++)
	{
		sum1= sum1 + a[j];
	}
	if(sum>sum1)
	{
		printf("%d",sum1);
	}
	else
	{
		printf("%d",sum);
	}
	
}
