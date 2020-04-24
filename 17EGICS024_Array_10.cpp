#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p;
	int n,i,target;
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
	for(i=0;i<n;i++)
	{
		if(p[i]==target)
		{
			cout<<i;
			break;	
		}
		else if(target<p[i])
		{
			cout<<p[i-1];
			break;
		}	
	}
	getch();
	return 0;
}
