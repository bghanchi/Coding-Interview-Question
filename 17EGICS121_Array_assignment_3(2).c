#include <stdio.h>
#include <string.h>
int main()
{
    int i,num=0,sum1=0,sum2=0,count1=0,count2=0,n=0;
	printf("\n enter no of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter elements:");// assuming the integers as positive numbers
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>num)
		{
			sum1+=arr[i];
			num = arr[i];
			count1++;
		}
		else{
            count1 = 1;
            sum1 = arr[i];
            num = arr[i];
			}
        if(count1>count2)
        {
            count2 = count1;
            sum2 = sum1;
		}
	}
	printf("\nlongest increasing order sum is: %d,&count=%d\n",sum2,count2);
}
