#include<bits/stdc++.h>
using namespace std;
void fl(int a[],int x,int n){
    
    int first=-1,last=-1;
    for(int i=0;i<x;i++)
    {
        if(n!=a[i])
            continue;
        if(first==-1)
            first=i;
        last=i;
    }
    if(first!=-1)
    {
        cout<<"First occurence "<<first
            <<"\nLast occurence "<<last;
    }
    else
        cout<<"\nNot found";
}
int main()
{
    int a[]={1,2,3,4,5,6,3,9,2,3,2,4};
    int x=sizeof(a)/sizeof(a[0]);
    fl(a,x,3);
    return 0;
}