#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long long int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	long long int max1;
	long long int max2;
	max1=*max_element(v.begin(),v.end());//Finding maximum element in vector
	for(int i=0;i<n;i++)
	{
		if(v[i]==max1)
		{
			v.erase(v.begin()+i);//Removing maximum element from the vector
			break;
		}
	}
	max2=*max_element(v.begin(),v.end());
	cout<<max1*max2;
    return 0;
}
