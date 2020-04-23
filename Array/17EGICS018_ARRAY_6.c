#include<stdio.h>
void main()
{
	int n, fmax, smax, i, j, m;
	printf("Enter the no of input: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter inputs: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n>2)
	{
		if(a[1]>a[0]){
			fmax=a[1];
			smax=a[0];
		}
		else{
			fmax=a[0];
			smax=a[1];
		}
		for(i=2;i<n;i++)
		{
			if(a[i]>fmax){
				smax=fmax;
				fmax=a[i];
			}
			else if(a[i]>smax){
				smax=a[i];
			}
		}
		m=fmax*smax;
		printf("\n%d",m);
	}
	else
	{
		printf("Please,enter valid no of inputs.");
	}
}
