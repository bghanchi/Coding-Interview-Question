#include<stdio.h>
#include<conio.h>
int main(void)
{
	int l,i,j,f,y,no=NULL,fx;
	printf("LENGHT OF ARRAY: ");
	scanf("%d",&l);
	int x[l];
	printf("ENTER ARRAY :\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<l;i++)
	{
		y=0;
		if(x[i]!=no)
		{	
			for(j=i;j<l;j++)
		    {
		    	if (x[j]==x[i])
			    {
			    	y = y+1;
			    }
		    }
		    if(f<y)
		    {
		    	f=y;
		    	no=x[i];
			}
	    }
	}
	printf("NUMBER : %d FREQUENCY : %d",no,f);
	return 0;
}
