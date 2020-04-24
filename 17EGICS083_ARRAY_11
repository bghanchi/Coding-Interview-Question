#include<stdio.h>
int main()
{
	int check=0,i,n,j,sum;
	printf("Enter size of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		sum=a[i];
		for(j=i+1;j<n;j++)
		{
			sum=sum+a[j];
			if(check<sum)
			{
				check=sum;
			}
		}
	}
	printf("%d",check);
}
