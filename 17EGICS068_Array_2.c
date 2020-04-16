#include<stdio.h>
int main()
{
	int *a,n,i,front,mid;
	float sum1=0,sum2=0;
	printf("enter the length of the array required \n note:-Take the array to be even blocks\n");
	scanf("%d",&n);
	front = 0;
	mid=n/2;
	a = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the %dth element\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=front;i<mid;i++)
	 {
	 	sum1=sum1+a[i];
	 }
	for(i=mid;i<n;i++)
	 {
	 	sum2=sum2+a[i];
	 } 
	printf("sum of first half of the array is %.2f and sum of second half of the array is %.2f",sum1,sum2);
}
