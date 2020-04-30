#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int i,j=0;
    string a,b;
    cout<<"enter pattern:";
    getline(cin, b);
    cout<<"enter string:";
    getline(cin, a);
    char first = b[0],second = ' ';
    string word = "";
    string word1 = "";
    string word2 = "";
    bool flag = true;
    //assuming string pattern of two different words only. i.e., only two character will be there in pattern (like a,b)
    for (i=1; i<strlen(a.c_str()); i++) {
        if(b[i] != first)
        {
            second = b[i]; break;
        }
    }
    for (auto x: a)
    {
        if (x == ' ')
        {
            if(word1 == "")
            {
                word1 = word;
                word = "";
            }
            else{
                word2 = word;
                word = ""; break;
            }
        }
        else
        {
            word += x;
        }
    }
    for(i=0,j=0; i<strlen(a.c_str()); i++)
    {
        if (a[i] == ' ')
        {
            if(b[j]== first)
            {
                cout<<"compare: "<<word<<","<<word1;
                if(strcmp(word.c_str(),word1.c_str()) == 1)
                {
                    flag=false; break;
                }
                word = "";
                j++;
            }
            else if(b[j] == second)
            {
                cout<<"compare: "<<word<<","<<word2;
                if(strcmp(word.c_str(),word2.c_str()) == 1)
                {
                    flag=false; break;
                }
                word = "";
                j++;
            }
            else{
                word2 = word;
                word = "";
            }
        }
        else{
            word += a[i];
        }
    }
    if(flag == true)
    {
        cout<<"\nit follows the pattern\n";
    }
    else{
        cout<<"\nit doesn't follows the pattern\n";
    }
}
