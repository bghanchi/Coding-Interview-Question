#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *p;
	int n,i,j,count;
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
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(p[i]==p[j])
			{
				count++;	
			}
		}
		if(count==1)
		{
			cout<<p[i];
			break;
		}
	}
	getch();
	return 0;
}
