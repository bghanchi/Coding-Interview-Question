#include<bits/stdc++.h>

using namespace std;

int main(){
int n,i;
cin>>n;
int a[n];
map<int ,int >m;
for (i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;
}
int o;
o=m.size();
if (o==n)
    cout<<"false"<<endl;
else
    cout<<"true"<<endl;
return 0;
}
