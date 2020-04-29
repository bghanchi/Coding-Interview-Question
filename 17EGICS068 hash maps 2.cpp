#include<iostream>
#include<set>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tar,i,j,key,c=0; //used int variables
	cout<<"enter size of the array required    ";
	cin>>i; //taking size of the array
	int *p = new int[i]; //dynamically allocating the array
	cout<<"enter the array \n";
	for(j=0;j<i;j++) //inputing the array
	{ 
	   cout<<"enter the "<<j+1<<"th element  ";
		cin>>p[j];
	}
	cout<<"enter the targate value  ";
	cin>>tar;
	set<int> set1; //transferring the array to a set for unique elements
	set<int>:: iterator itr; //iterator for keeping track of the set1 used
	for(j=0;j<i;j++) //transferring the array elements to set1
	{
		set1.insert(p[j]);
	}
	for(j=0;j<i;j++) //checking if the element+1 in array is present in the set1 
	{
		key = tar-p[j];
		if(set1.count(key)) //if found the element in set increasing the counter.
		{
			c++;
		}
	}
	cout<<"\n elements found are   ";
	cout<<c/2; //printing the counter / output the value is divide by since it counts both ways .	
}
