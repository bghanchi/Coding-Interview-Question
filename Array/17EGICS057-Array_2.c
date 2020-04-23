#include<stdio.h>
void main()
{
	int n,z,sum1=0,sum2=0;
	printf("enter a array size");
	scanf("%d",&n);
	if(n%2==0)
	{
		int a[50],i,j;
		printf("enter array elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}	
		z=n/2;
		for(i=0;i<z;i++)
		{
			sum1=sum1+a[i];
		}
		for(j=z;j<n;j++)
		{
			sum2=sum2+a[j];
		}
	(sum1<sum2)?printf("minimum sum is %d",sum1):printf("minimum sum is %d",sum2);
		
	}
	else
	{
		printf("please enter even no. of array size");
		
	}

	
}
