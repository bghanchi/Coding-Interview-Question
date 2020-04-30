#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,target,count=0;
	cin>>n>>target;
	vector<int> nums(n);
	unordered_map<int,int> umap;
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
		umap[nums[i]]++;
	}
	for(auto x:umap)
	{
		if(umap.find(target-x.first)!=umap.end()&&(x.first*2)!=target)
		{
			count+=min(umap[target-x.first],x.second);
			umap.erase(target-x.first);
		}
	}
	if(umap.find(target/2)!=umap.end()&&target%2==0)
	count+=umap[target/2]/2;
	cout<<count;		
}
