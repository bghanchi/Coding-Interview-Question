#include<stdio.h>
int main()
{
	int i,j,check,n,mult=0;
	printf("Enter size of the array");
	scanf("%d",&n);
	printf("Enter array elements");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mult=0;
		for(j=i+1;j<n;j++)
		{
			mult= a[i] * a[j];
			if(check<mult)
			{
				check=mult;
			}
		}
	}
	printf("%d",check);		
}
