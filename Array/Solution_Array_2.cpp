#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long long int> v(n);
	long long int firstHalfSum = 0;
	long long int secondHalfSum = 0;
	for(int i=0;i<n;i++)
		cin>>v[i];		
	for(int i=0;i<n;i++)
	{
		if(i<n/2)
			firstHalfSum+=v[i];
		else
			secondHalfSum+=v[i];	
	}
	cout<<max(firstHalfSum,firstHalfSum);	
		
}
