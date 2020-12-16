#include<bits/stdc++.h>
#include<stack>
#include<string>
#include<iostream> 
using namespace std; 
bool check(string);
int main() 
{ 
    string rtr; 
    cout<<"enter the string";
    getline(cin,rtr);
    bool ans;
    ans = check(rtr);
    if (ans) 
        cout << "true"; 
    else
        cout << "false"; 
}
bool check(string str) 
{ 
    int i,si;
    stack<char> m; 
    char temp;  
    for (i=0; i<str.length(); i++) 
    { 
        if (str[i]=='('||str[i]=='['||str[i]=='{') 
        {  
            m.push(str[i]); 
            continue; 
        } 
        if (m.empty()) 
           return false; 
        if (str[i]==')')
        { 
            temp = m.top(); 
            m.pop(); 
            if (temp=='{' || temp=='[') 
                return false; 
            break; 
        }
        if (str[i]=='}') 
		{
		  
            temp = m.top(); 
            m.pop(); 
            if (temp=='(' || temp=='[') 
                return false; 
            break; 
        }
        if (str[i]==']')
        {
		  
            temp = m.top(); 
            m.pop(); 
            if (temp =='(' || temp == '{') 
                return false; 
            break; 
        } 
    } 
    si = str.length();
    if(m.empty()||si==0)
	{
		return true;
	 } 
	else
	{
		return false;
	 } 
}  
 
