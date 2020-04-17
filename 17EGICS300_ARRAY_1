#include<stdio.h>
#include <stdlib.h> 
int main()
{
	int*arr;
	int n,i,j,mf,mnc=0,count;
	printf("Enter the size of array");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			count++;
		}
		if(mnc<count)
		{
			mnc=count;
			mf=arr[i];
		}
	}
	printf("OUTPUT MAX FEQ :%d",mf);
	return 0;
}
