#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x){
    if(r>=1)
    {
        int mid=l+(r-1)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
        {
            return binarySearch(arr,1,mid-1,x);
        }
       else
        return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,10,40};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    int result=binarySearch(arr,0,n-1,x);
    if(result==-1)
    {
        cout<<"Element not present in array.";
    }
    else
        cout<<"element present at index"<<result;
    return 0;
}