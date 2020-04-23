#include<stdio.h>
#include<conio.h>
int main()
{
int *arr;
int n,i,j,max=0;
printf("Enter the even  size of array");
scanf("%d",&n);
if(n%2==0)
{
arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Max product is \n");
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
     if(arr[i]*arr[j]>=max)
     max=arr[i]*arr[j];
  }
}
printf("%d\n",max);
}
else{
printf("Enter even size ");
}
getch();
return 0;
}
