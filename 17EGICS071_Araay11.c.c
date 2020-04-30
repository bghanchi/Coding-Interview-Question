#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ int n,sum1=0,sum2=0,i,t;
  printf("Enter size of an array");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements of an array");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  	
  }
  printf("sum of ");
  if(0<n&& n<pow(10,6)){
  
  for(i=0;i<n;i++)
  {
  	sum2+=a[i];
  	if(sum2>sum1)
  		{
  		sum1=sum2;
  		printf("%d   ",a[i]);
  		}
  	if(sum2<0){
  		sum2=0;
  		sum1=0;
	  }
  }}
  printf("\nLargest sum : %d",sum1);
getch();
  return 0;
}
