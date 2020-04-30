#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=i;j<n;j++)
		{
			if(v[i]==v[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			cout<<v[i];
			break;
		}
	}	
}
