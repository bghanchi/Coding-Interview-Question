#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin>>size;
	char arr[size];
	char answer[size];
	cin>>arr;
	int s;
	cin>>s;
	s=s%size;
	for(int i=0;i<size;i++)
	{
		answer[s]=arr[i];
		s++;
		if(s==size)
			s=0;
	}
	cout<<answer;
}
