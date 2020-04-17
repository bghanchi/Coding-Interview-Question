#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[n],i;
	cout<<"Enter the Size of array\n";
	cin>>n;
	cout<<"Enter elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	int count1=1,count2=1,t=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i-1])
		count1++;
		else
		{
			if(count1>count2)
			{
				count2=count1;
				t=a[i-1];
			}
			count1=1;
		}
	}
	
	if(count1>count2)
	{
		count2=count1;
		t=a[n-1];
	}
	cout<<"\nans : "<<t;
}
