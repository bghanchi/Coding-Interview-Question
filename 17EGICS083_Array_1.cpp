#include<stdio.h>
int main()
{
	int n,i,j,no,loopcount,maincount=0;
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
		loopcount=0;
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				loopcount++;
			}
		}
		if(maincount<loopcount)
			{
				maincount=loopcount;
				no=a[i];	
			}	
	}
		printf("%d",no);	 
}
