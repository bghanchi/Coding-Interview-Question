#include <stdio.h>
int main()
{
  int i,temp,n,t,s,avg,product=0;
  printf("enter the size of array \n");
	{
	  scanf("%d",&n);
	  int a[n];
	  printf("enter the array elements \n");
	  for(i=0;i<n;i++)
	{
 	scanf("%d",&a[i]);
    }
	  	t=a[0];
	  	s=a[1];
	  	if(s>t)
 	{
		 temp=s;
		 s=t;
		 t=temp;
 	}
  	for(i=2;i<n;i++)
 	
 		if(a[i]>t)
 	{
 		s=t;
 		t=a[i];
 	}
 	else if(a[i]>s)
 	{
 		s=a[i];
 	}
 	}
  	product=(t*s);
  	printf("%d",product);
  	printf("\n");
 }


