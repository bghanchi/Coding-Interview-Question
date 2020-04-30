#include<stdio.h>
#include<conio.h>
int c =0;
int count_pair(int a, int b , int k)
{ 
  if(k==(a+b))
   { c++;
   	return c;
   	}
	else{
		return 0;
	}
}
int main()
{
	int n,t, i,j,result , count;
	printf("Enter the size of an aaray");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elments");
	for(i=0;i<n;i++)
	{ scanf("%d",&a[i]);}
	printf("Enter the target value");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{ for(j=i+1;j<n;j++){
	
		result= count_pair(a[i],a[j],t);
		if(result>0)
		{ i++;
		  count=result;
		}
}
	}
	printf("Count :%d",count);
	getch();
	return 0;
}
