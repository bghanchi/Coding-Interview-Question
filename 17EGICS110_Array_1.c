#include<stdio.h>
#include<math.h>
int main()
{ 
  int n,i,j,sum1=0,sum2=0;
  printf("enter size of array:\n");
  scanf("%d",&n);
  int a[n];
  if((1<n||n<pow(10,6))&& (n%2==0 ))
   {
  		for(i=0;i<n;i++)
  		 {
  		
  			scanf("%d",&a[i]);
	  	 }
  	}
   for(i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
   {
   	 sum1=sum1+a[i];
   	 sum2=sum2+a[j];
   }
   if(sum1<sum2)
   { 
   
	printf("sum%d",sum1);
    }
    else
	{
    	printf("sum %d",sum2);
    	
	}
getch();
return 0; 
}
