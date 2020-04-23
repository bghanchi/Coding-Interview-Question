#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p;
	int n,i,j,max,product;
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
	max=p[0]*p[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			product=p[i]*p[j];
		}
		if(product>max)
		{
			max=product;
		}
	}
	cout<<max;
	getch();
	return 0;
}
