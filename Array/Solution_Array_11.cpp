#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0,max;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	max=nums[0];
	for(int i=0;i<n;i++)
    {
        sum = sum + nums[i];
        if(sum>max)
            max = sum;  
        if(sum<0)
            sum=0;      
    }
	cout<<max;	
}
