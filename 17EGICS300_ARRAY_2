#include<stdio.h>
#include <stdlib.h> 
int main()
{
	int*arr;
	int n,i,j,sum1=0,sum2=0;
	printf("Enter the size of array");
	scanf("%d",&n);
	if(n%2==0)
	{
		arr = (int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		for(i=0,j=n-1;i<j;i++,j--)
		{
			sum1=sum1+arr[i];	
			sum2=sum2+arr[j];	
		}
		sum1<=sum2?printf("%d",sum1):printf("%d",sum2);
	}
	return 0;
}
