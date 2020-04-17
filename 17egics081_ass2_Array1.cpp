#include<stdio.h>
int main()
{
	int i,j,n,c=0;
	printf("enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j && a[i]==a[j])
			{
				break;
			}
		}
		if(j==n)
		{
			printf("non repeating element is %d",a[i]);
		}
	}
}
