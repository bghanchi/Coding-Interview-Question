#include<stdio.h>
int main()
{
	int i,j,n,arr[n],count=0,mf,mnc=0;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
		{
			mf=arr[i];
		}
	}printf("%d",mf);
}
