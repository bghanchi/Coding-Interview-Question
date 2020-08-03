#include <stdio.h>
#include <string.h>
int main()
{
    	int i,max1=0,max2=0,result=0,n=0;
	printf("\n enter no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
			
		}
		else if(max2<arr[i]){
			max2=arr[i];
		}
	}
	printf("\nmax1= %d,max2 = %d\nProduct: %d\n",max1,max2,max1*max2);
}
