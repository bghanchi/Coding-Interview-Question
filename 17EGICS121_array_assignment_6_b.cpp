#include<iostream>
using namespace std;
int main()
{
    int n,j,i,count=0;
    cout<<"enter size=";
    cin>>n;
    int a[n];
    int target;
    cout<<"\nenter target: ";
    cin>>target;
    cout<<"enter elements:";
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    //Assuming the array is sorted in ascending order
    for (i=0,j=i+1; i<n-1; i++,j++)
    {
        if(a[i]+a[j]==target){
            count++;
        }
    }
    cout<<"count="<<count;
    return 0;
}
