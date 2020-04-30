#include<stdio.h>
#include<stdlib.h>
int main()
{

int n,s,i,j,temp;
printf("Enter the size of array\n");
scanf("%d",&n);
char arr[n];
scanf("%s",&arr);
printf("Enterno of place to shift\n");
scanf("%d",&s);
for(i=0;i<s;i++)
{
	temp=arr[n-1];
	for(j=n-1;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[0]=temp;
}
printf("After shifting character array is \n");
printf("%s",arr);

return 0 ;
}
