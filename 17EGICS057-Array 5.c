#include<stdio.h>
void main()
{
	int n;
	printf("Enter a size of an array");
	scanf("%d",&n);
	int a[n],l,s,i,j;
	printf("Enter an array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		l=a[0];
		s=a[1];
	}
	else
	{
		l=a[1];
		s=a[0];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
		else
		{
			s=a[i];
		}
	}
	printf("%d is the multiplication of two largest number",(l*s));
	
}
