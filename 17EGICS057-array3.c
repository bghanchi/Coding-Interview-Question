#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*b={0},j;
	printf("enter a size of an array");
	scanf("%d",&n);
	int a[n];
	b=(int*)malloc(n*sizeof(int));
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    b[a[i]]++;
	    
	}
	for(i=0;i<*b;i++)
	{
		if(b[i]==1)
		{
			printf("%d\n",i);
		}
	}
}
