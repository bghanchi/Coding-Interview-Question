#include<stdio.h>
int main()
{
	int n,i,j,rot_fac,temp;
	printf("Enter size of string");
	scanf("%d",&n);
	char str[n];
	printf("Enter string");
	scanf("%s",str);
	printf("Enter rotation factor");
	scanf("%d",&rot_fac);
	for(j=1;j<=rot_fac;j++)
	{
		temp=str[n-1];
		for(i=n-1;i>=0;i--)
		{
			if(i>0)
			{
				str[i]=str[i-1];
			}
			else
			{
				str[i]=temp;
			}	
		}
	}
	printf("%s",str);	
}
