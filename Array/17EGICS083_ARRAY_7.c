#include<stdio.h>
int main()
{
	int i,j,no,no1,count,c,n;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elments");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					{
						count++;
					}
							
			}
			
	c = (n-1)-i;
	if(c == count)
		{
			no = a[i];
			printf("%d ",no);
		}
		
	}
	
}
