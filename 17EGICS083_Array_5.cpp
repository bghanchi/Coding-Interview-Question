#include<stdio.h>
int main()
{
	int i,sum=0,temp_sum,temp_count,n,count;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			temp_count=1;
			temp_sum=a[i];
		}
		else if(i>0 && i<n-1)
		{
			if(a[i]>a[i-1])
			{
				temp_count++;
				temp_sum= temp_sum+a[i];
			}
			else
			{
				if(count<temp_count)
				{
					count= temp_count;
					sum=temp_sum;
				}
				temp_count=1;
				temp_sum=a[i];
			}
		}
		else
		{
			if(a[i]>a[i-1])
			{
				count++;
				temp_sum=temp_sum+a[i];
				if(count<temp_count)
				{
					count=temp_count;
					sum=temp_sum;
				}
			}
		}
	
	}
		printf("%d",sum);
	
}
