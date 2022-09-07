#include<bits/stdc++.h>
using namespace std;
void TOH(int n, string src,string Help, string Dest){
    if(n==1){
        cout<<"Disk "<<n<<" moved to "<<Dest<<endl;
        return;
    }
    TOH(n-1,src,Dest,Help);
    cout<<"Disk "<<n<<" moved to "<<Dest<<endl;
    TOH(n-1,Help,src,Dest);
}
int main(){
    int n=3;
    string src="S",Help="H",Dest="D";
    TOH(3,src,Help,Dest);
    return 0;
}