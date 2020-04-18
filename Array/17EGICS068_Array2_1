#include<stdio.h>
int main()
{
	int *a,*c;
	unsigned long  j,n,i;
	printf("enter the length of the array required  ");//asking for user input.
	scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));//dynamically allocating array for input
	c = (int*)malloc(n * sizeof(int));//using counter array to check freq.
	for(i=0;i<n;i++)//making all the counter vaules 0.
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)//array intake.
	{
		printf("enter the %dth element\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)//scaning of each element for its frequency.
	{
		for(j=0;j<n;j++)
		{
	    	if(a[i]==a[j])
			c[i]=c[i]+1;
		}
	}
	for(i=0;i<n;i++)//loop for checking the freq. as 1
	{
		if(c[i]==1)//condition for counter chceking freq. as 1
		 {
		  printf("\n(%d)this element has frequency as 1 \n entered at position %d",a[i],i+1);//printing non-repeating elements.
		 }
	
	}
    
}
//9	13	C:\Users\Atc\Desktop\cprog\test.c	[Warning] incompatible implicit declaration of built-in function 'malloc'
