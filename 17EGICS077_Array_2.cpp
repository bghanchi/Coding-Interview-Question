#include<stdio.h>
int main(){
	int n,i,a[n],c,sum=0,s=0;
	printf("LENGHT OF ARRAY: ");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENT :\n");
	for(i=0;i<n;i++)
	{   
		scanf("%d",&a[i]);	
	}
	c=n/2;
	for(i=0;i<c;i++)
	{
		sum=sum+a[i];	
	}
	for(i=c;i<n;i++)
	{
		s=s+a[i];
	}	
	if(s>sum)
	{
		printf("Minimum sum = %d",sum);
	}
	else
	{
		printf("Minimun sum = %d",s);
	}
}
