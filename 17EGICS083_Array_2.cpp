#include<stdio.h>
int main()
{
	int n,i,j,sum,sum1,a[n],b[n];
	printf("Enter size of the array(in even number)");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		sum=sum + a[i];
	}
	for(j=(n/2);j<n;j++)
	{
		sum1=sum1 + b[i];
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
