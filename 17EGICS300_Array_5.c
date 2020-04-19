#include<stdio.h>
#include<conio.h>
int main()
{
int *arr;
int n,i,j,sum=0,m=1,l=1,mi=0;

printf("Enter the size of array\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	if(arr[i]>arr[i-1])
	l++;
	else
	{
		 if(m<l)
		 {
			m=l;
		 mi=i-m;
		 }
		 l=1;
	 }
}
if(m<l)
{
	m=l;
	mi=n-m;
}
for(i=mi;i<m+mi;i++)
{
sum=sum+arr[i];
}
printf("sum is %d:",sum);
getch();
return 0 ;
}
