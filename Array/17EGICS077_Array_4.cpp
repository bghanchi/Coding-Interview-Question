#include<stdio.h>
int main()
{
	
	int l,i,j,r;
	printf("LENGHT OF ARRAY: ");
	scanf("%d",&l);
	char x[l],temp;
	printf("ENTER ARRAY ELEMENT :\n");
	scanf("%s",&x);
	printf("Rotation : ");
	scanf("%d",&r);
	for(j=0;j<r;j++)
	{
		temp=x[l-1];
		for(i=l-1;i>0;i--)
		{
			x[i]=x[i-1];
		}
		x[0]=temp;
	}

			printf("string after rotation :%s",x);	
	
	
}
