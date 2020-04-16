#include<stdio.h>
int main()
{
	int a[100],i,max=0,n,ele;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter elemnts:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int f[10]={0};
	for(i=0;i<n;i++)
	{
		f[a[i]]++;
	}
	max=f[0];
	for(i=0;i<n;i++)
    {
		if(f[i]>max)
		{
			max=f[i];
			ele=i;
		}
	}
	printf(" max frequency = %d",ele);
}
