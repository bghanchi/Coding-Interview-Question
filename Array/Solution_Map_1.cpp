#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	vector<int> nums(n);
	unordered_map<int,int> umap;
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];	
		umap[nums[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(umap.find(nums[i]+1)!=umap.end())
			count++;
	}	
	cout<<count;		
}
