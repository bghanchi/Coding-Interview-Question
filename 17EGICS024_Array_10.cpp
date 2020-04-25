#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p;
	int n,i,target,lb,ub,mid;
	cout<<"Enter Size of array:";
	cin>>n;
	p=new int[n];
	if(n<1)
	{
		exit(0);
	}
	cout<<"\nEnter array Elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"\nEnter Target Value:";
	cin>>target;
	lb=0;
	ub=n-1;
	mid=(lb+ub)/2;
	while(lb<=ub)
	{
		if(target==p[mid])
		{
			cout<<mid;
			exit(0);
		}
		else if(target>p[mid])
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
		mid=(lb+ub)/2;
	}
	if(target>p[ub])
	{
		cout<<ub+1;
	}
	else
	{
		cout<<lb-1;
	}
	getch();
	return 0;
}
