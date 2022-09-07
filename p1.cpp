#include<iostream>
using namespace std;
int main(){
    int n,m,Upp=0,Low=0;
    cin>>n>>m;
    if(n<m)
    {
        Upp=m;
        Low=n;
    }
    else if(n>m){
        Upp=n;
        Low=m;
    }
    else
        cout<<"\nThe numbers are same.\n";
    for(int i=Low;i<=Upp;i++)
    {
        if(i%2!=0)
            {
                cout<<i<<" ";
            }
    }
    return 0;
}