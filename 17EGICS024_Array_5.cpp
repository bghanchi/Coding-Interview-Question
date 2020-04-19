#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p,*q;
	int n,i,j,max;
	cout<<"Enter Size of array:";
	cin>>n;
	p=new int[n];
	q=new int[n];
	if(n<1)
	{
		exit(0);
	}
	cout<<"\nEnter array Elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		q[i]=p[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(p[j]<p[i] && q[i]<q[j]+p[i])
			{
				q[i]=q[j]+p[i];
			}
		}
	}
	max=q[0];
	for(i=0;i<n;i++)
	{
		if(max<q[i])
		{
			max=q[i];
		}
	}
	cout<<max;
	getch();
	return 0;
}
