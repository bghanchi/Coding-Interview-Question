#include<stdio.h>
#include<stdlib.h>
int main()
{
int *arr;
int n,i,j,count;


printf("Enter the size of array\n");
scanf("%d",&n);

arr=(int*)malloc(n*sizeof(int));

for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("Non Repeating elements is \n");
for(i=0;i<n;i++)
{
	count=0;
	for(j=0;j<n;j++)
	{
		if(arr[i]==arr[j])
		count++;
	}
	if(count<2)
	printf("%d\n",arr[i]);
}
return 0;
}
