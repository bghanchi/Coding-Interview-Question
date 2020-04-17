#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p;
	int n,i,j,sum=0,sum1=0;
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
	for(i=0,j=n/2;i<n/2,j<n;i++,j++)
	{
		sum+=p[i];
		sum1+=p[j];
	}
	if(sum<sum1)
	{
		cout<<sum;
	}
	else
	{
		cout<<sum1;
	}
	getch();
	return 0;
}
