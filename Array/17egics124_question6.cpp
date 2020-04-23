#include<stdio.h>
void main()
{
	int i,j,a,b,n;
	printf("enter size of array :");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	a=x[0];
	b=x[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]*x[j]>a*b)
			{
				a=x[i];
				b=x[j];
			}
		}
	}
	printf("maximum product is %d",(a*b));
}
