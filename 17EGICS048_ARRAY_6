#include<stdio.h>
void main()
{
	int n,i,t=0,p=0,q;
	printf("enter size of an array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>t)
		{
			t=a[i];
			q=i;
		}
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]<t && a[i]>p)
		{
		    p=a[i];	
		}
		if(a[i]==t)
		{
			if(i!=q)
			{
				p=a[i];
			}	
		}	
	}
	printf("%d",t*p);
}
