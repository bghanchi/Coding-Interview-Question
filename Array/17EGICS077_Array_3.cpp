#include<stdio.h>
int main()
{
	int l,i,j,y,no;
	printf("LENGHT OF ARRAY: ");
	scanf("%d",&l);
	int x[l];
	printf("ENTER ARRAY ELEMENT :\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<l;i++)
	{
		y=0;
		{	
			for(j=0;j<l;j++)
		    {
		    	if (x[j]==x[i])
			    {
			    	y = y+1;
			    }
		    }
		    if(y==1)
		    {
		    	
		    	no=x[i];
		    	printf("\n%d",no);
			}
	    }
	}
}
