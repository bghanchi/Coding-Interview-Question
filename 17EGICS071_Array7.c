#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter the size of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{ 
	  scanf("%d",&a[i]);
	  
		}
		printf("leaders are:");
		for(i=0,j=i+1;j<n-1,i<n-1;j++,i++)
		
		{
			if(a[i]<a[j]||a[j]==a[n-1])
		     {
		     	printf("%d  ",a[j]);
			 }
			}	

getch();
return 0;
}
