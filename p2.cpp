#include<iostream>
using namespace std;
int main()
{
    int n,first=0,sec=1,temp=0;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<" "<<first;
        temp=first+sec;
        first=sec;
        sec=temp;
    }
    return 0;
}