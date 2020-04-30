#include<stdio.h>
int main()
{
	int n,no,i,j,count;
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
		count=0;
		for(j=i+1;j<n;j++)
		{
			
			if(a[j]==a[i])
			{
				count++;
				
			}
		}
		if(count==0)
		{
			no=a[i];
			break;
		}
	}
	printf("%d",no);
}
