#include<bits/stdc++.h>
using namespace std;
void generate(int nR){
    vector<vector<int>> a(nR);
    int i=0,j=0;
    for(i=0;i<nR;i++){
        a[i].resize(i+1,1);
        for(j=0;j<i;j++){
            if(j!=0)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<a.size();i++){
        for(j=0;j<a[i].size();j++){
                cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }  
}
int main(){
    int nR;
    cin>>nR;
    generate(nR);
    return 0;
}