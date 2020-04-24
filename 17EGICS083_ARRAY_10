#include<stdio.h>
int main()
{
	int n,i,t;
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter target value");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(t==a[i])
		{
			printf("%d ",i);
		}
		else if(t>a[i] && t<a[i+1])
		{
			printf("%d ",(i+1));
		}
	}
}
