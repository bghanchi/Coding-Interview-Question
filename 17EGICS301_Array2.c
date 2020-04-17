#include<stdio.h>
int main()
{
int n,a[n],i,sum1=0,sum2=0,b,c,j;
printf("enter number of elements in even");

	scanf("%d",&n);
	printf("enter array elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}

	b=(n+1)/2;

	printf("%d\n",b);

	for(i=0;i<b;i++)

	{

		sum1=sum1+a[i];

	}
	printf("%d\n",sum1);
	printf("%d\n",b);
	for(j=b;j<n;j++)
	{
		sum2=sum2+a[j];
	}
	printf("%d\n",sum2);
	if(sum1>sum2)
	
		printf("%d",sum2);
	}
	else if(sum1<sum2)
	{
		printf("%d",sum1);
	}
else
	{
		printf("Both have same sum ie %d",sum1);
    }
}
