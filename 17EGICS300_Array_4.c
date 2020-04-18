#include<stdio.h>
#include<stdlib.h>
int main()
{
char *arr;
int n,s,i,j,temp;
printf("Enter the size of array\n");
scanf("%d",&n);
n=n+1;
arr=(char*)malloc(n*sizeof(char));
for(i=0;i<n;i++)
scanf("%c",&arr[i]);
printf("Enterno of place to shift\n");
scanf("%d",&s);
if(s>n)
s=s+1;
for(i=0;i<s;i++)
{
	temp=arr[n-1];
	for(j=n-1;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[j]=temp;
}
printf("After shifting character array is \n");
for(i=0;i<n;i++)
printf("%c",arr[i]);

return 0 ;
}
