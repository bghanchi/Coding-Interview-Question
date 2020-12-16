#include<bits/stdc++.h>
using namespace std;
int main(){
string a;
cin>>a;
int n,i;
map<char ,int >m;
map<string ,int >k;
n=a.length();
string b[n];
for (i=0;i<n;i++){
    cin>>b[i];
}
for (i=0;i<n;i++){
    m[a[i]]++;
    k[b[i]]++;
}
if (m.size()==k.size()){
        cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
return 0;
}
