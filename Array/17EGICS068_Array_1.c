#include<stdio.h>
int main()
{
	int *a,*c,*g,n,i,j,temp,l,pos;
	printf("enter the length of the array required  ");
	scanf("%d",&n);
	c=n;
	a = (int*)malloc(n * sizeof(int));
	c = (int*)malloc(n * sizeof(int));
	g = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("enter the %dth element\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	    	if(a[i]==a[j])
			c[i]=c[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		g[i]=c[i];
	}
	for(i=1;i<n;i++)
	{
      temp=c[i];
      l=i-1;
      while((temp<c[j])&&(l>=0)){
         c[l+1]=c[l];
         l=l-1;
      }
          c[l+1]=temp;
    }
    for(i=0;i<n;i++)
	{
		if(c[0]==g[i])
		 pos = i;
	}
	printf("the max frequency element is %d with frequency as %d",a[pos],c[0]);
    
}
