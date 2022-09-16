#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int a[n],temp=0;
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
