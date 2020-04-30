#include<iostream>
using namespace std;
int main()
{
    int i,j,n; bool flag=false;
    cout<<"enter no of elements:";
    cin>>n;
    int a[n];
    cout<<"enter elements :\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,j=i+1;i<n;i++,j++)
    {
        if(a[i] == a[j])
        {
            flag = true; break;
        }
    }
    if(flag==true){
        cout<<"\ntrue\n";
    }
    else{
        cout<<"\nfalse\n";
    }
}
