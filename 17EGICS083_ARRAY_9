#include<stdio.h>
int main()
{
	int i,j,n,prod;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elments");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		prod=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				prod=prod * a[j];
			}
		}
		printf("%d ",prod);
	}
}
