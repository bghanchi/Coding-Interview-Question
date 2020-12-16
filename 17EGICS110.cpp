#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i,a[n];
map<int , int >m;
for (i=0;i<n;i++){
    cin>>a[i];
}
for (i=0;i<n;i++){
    m[a[i]]++;
}
int b[n],c=0;
for (i=0;i<n;i++){
    b[i]=a[i]+a[i+1];
}
for (i=0;i<n-1;i++){
    if (m[b[i]]>0){
        c++;
    }
}
if (c>0){
    cout<<c+1<<endl;
}
else{
    cout<<c<<endl;
}
return 0;
}
