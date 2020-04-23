#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ int n,i , p=0,j,max=0;
  printf("Enter size of an Array:");
  scanf("%d",&n);
  int a[n];
	printf("Enter elements of Array:");
	for(i=0;i<n;i++)
	  {
		scanf("%d",&a[i]);
	  }  
   if(1<n||n<pow(10,6))
   {
     for(i=0;i<n;i++)
	  {
		for(j=i+1;j<n;j++)
		{   p=a[i]*a[j];
			if(p>max)
		     {
		 		max=p;
		 	  }
	}}}
printf("Maximum product: %d",max);
getch();
return 0;	
	
}
