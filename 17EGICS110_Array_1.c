#include<stdio.h>
#include<math.h>
void main()
{
	int s=0,n;
	printf("enter a size of an array");
	scanf("%d",&n);
	int a[50],b[50]={0},i,j,max=0;
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		while(a[i]%10!=0)
		{
			j=a[i]%10;
			a[i]=a[i]/10;
		    b[j]=b[j]+1;	
	    }
	}
	for(j=0;j<n;j++)
	{
		if(b[j]>max)
		{
			max=b[j];
			s=j;
		}
	}
	printf("  Maximum Frequency of %d number",s);
	

}
