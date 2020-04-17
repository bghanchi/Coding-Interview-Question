// The solution can be improved using maps. We will discuss about it in future.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long int> A(n);
	int freq;
	int maxFreqElement;
	int maxFreq=0;
	for(int i=0;i<n;i++)
		cin>>A[i];
	maxFreqElement=A[0];
	for(int i=0;i<n;i++)
	{
		freq=0;
		for(int j=i;j<n;j++)
		{
			if(A[i]==A[j])
				freq++;	
		}
		if(freq>maxFreq)
		{
			maxFreq=freq;
			maxFreqElement=A[i];
		}
	}
	cout<<maxFreqElement;
}
