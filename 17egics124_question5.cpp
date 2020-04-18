#include<stdio.h>
void main()
{
	int i,j,n,temp=0,sum=0;
	printf("enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				if(sum==0)
				{
					sum = a[j]+a[j+1];
				}
				else 
				{
					sum = sum + a[j+1];
					if(j==n-2)
					{
						printf("%d",sum);
						goto end;
					}
				}
			}
			else
			{
				if(temp<sum)
				{
					temp=sum;
					sum=0;
					break;
				}
				else
				{
					sum=0;
					break;
				}
			}
		}
	}
	printf("\n%d",temp);
	end:
		return ;
}
