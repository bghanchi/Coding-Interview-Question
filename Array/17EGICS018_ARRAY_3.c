#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int a[50],b[50],i,j,c;
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i] = -1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]){
				c++;
				b[j] = 0;
			}
		}
		if(b[i]!=0){
			b[i] = c;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i] == 1)
		{
			printf("\n%d",a[i]);
		}
	}
}
