#include<stdio.h>
#include<conio.h>
int main()
{ int n,flag=0,i,t;
  printf("Enter size of an array");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements of an array");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  	
  }
	printf("enter the target value");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if( a[i]==t )
		{ flag=1;
	      printf("%d",i);
	      break;
		 }
	if(flag==0 && (a[i]>t && a[i-1]<t))
	{  printf("%d",i);
		break;
	   
		
	}}

	
	
	
	getch();
	return 0;
}
