#include<stdio.h>
void main()
{
	int i,n,j,s;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("enter no. of shiftings :");
	scanf("%d",&s);
	char a[n],temp;
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(j=1;j<=s;j++)
	{
		temp=a[n-1];
		for(i=n-2;i>=0;i--)
	    {
		    a[i+1]=a[i];
	    }
	    a[0]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
