#include<bits/stdc++.h>
using namespace std;
string de(string str)
{
    unordered_map <char, int> m;
    int i=0;
    string st;
    for(i;i<str.length();i++)
    {
        m[str[i]]++;
    }
    for(auto x:m)
    {
        if(i<=str.length())
            st[i]=x.first;
        i++;
    }
    cout<<st;
}
int main()
{
    string str;
    getline(cin,str);
    de(str);
    return 0;
}