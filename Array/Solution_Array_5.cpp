#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int maxSum=0,maxLength=0,currentLength=0,currentSum=0;
	int n;
	cin>>n;
	vector<long long int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	maxSum=currentSum=v[0];
	maxLength=currentLength=1;
	for(int i=1;i<n;i++)
	{
		if(v[i]>v[i-1])
		{
			currentLength++;
			currentSum = currentSum + v[i];
			if(currentLength==maxLength)
			{
				if(currentSum>maxSum)
				{
					maxSum=currentSum;
				}
			}
			else if(currentLength>maxLength)
			{
				maxLength=currentLength;
				maxSum=currentSum;
			}
		}
		else
		{
			currentSum =v[i];
			currentLength=1;
		}
	}
	cout<<maxSum;
    return 0;
}
