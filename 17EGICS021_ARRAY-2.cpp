#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[n],i;
	cout<<"Enter the Size of array\n";
	cin>>n;
	if(n%2==0)
	{
		cout<<"Enter elements\n";
		for(i=1;i<=n;i++)
		cin>>a[i];
		
		int min1=1,max1=n/2,min2=(n/2)+1,max2=n,s1=0,s2=0;
		
		for(i=min1;i<=max1;i++)
		{
			s1+=a[i];
			
		}
		
		for(i=min2;i<=max2;i++)
		{
			s2+=a[i];
			
		}
		
		if(s1<s2)
		{
			cout<<"\n!st have min sum = "<<s1;
		}
		else
		cout<<"\n2nd have min sum = "<<s2;
		
	}
	else
	{
		cout<<"Please Enter even size of array\n";
	}
	
}
	
