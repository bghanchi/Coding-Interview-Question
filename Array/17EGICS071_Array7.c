#include<stdio.h>
#include<conio.h>
int main()
{	int n,i,j,c=0;
	printf("enter the size of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{ scanf("%d",&a[i]);}
	printf("leaders are:");
		for(i=0;i<n;i++){
			int c=0;
			for(j=i+1; j<n;j++)
			{	if(a[i]<=a[j])
		    	 {	c++;
		    	 break;
				 }
			}
			
			if(c==0 || a[i]==a[n-1])
			{
				printf("%d  ",a[i]);
		}	}

getch();
return 0;
}
