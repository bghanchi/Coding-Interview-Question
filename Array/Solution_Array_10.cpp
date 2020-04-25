#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    	cin>>nums[i];
    for(int i=0;i<n;i++)
    {
	    if(t<=nums[i])
    	{
    		cout<<i;
    		exit(0);
		}
    }
	cout<<n;
}
