#include<stdio.h>
int main()
{
	int n,arr[n],i,j,count,mf,mcn=0;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{    count=1;
		for(j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j])
				count++;
		}
			if(mcn<count)
			{
				mcn=count;
				mf=arr[i];
			}
		}
	printf("%d",mf);
	return 0;
}
