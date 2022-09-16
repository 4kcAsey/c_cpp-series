#include <stdio.h>
#include<limits.h>
#define min(a,b) (((a)<(b))?(a):(b));
#define max(a,b) (((a)>(b))?(a):(b));
int main()
{
    int a[8]={2,9,5,4,5,1,8,12},Min=INT_MAX,Max=INT_MIN,s_max=INT_MIN,s_min=INT_MAX;
    for(int i=0;i<8;i++)
    {
        Min=min(Min,a[i]);
        Max=max(Max,a[i]);
    }
    for(int i=0;i<8;i++)
    {
        if(a[i]<s_min&&a[i]!=Min)
            s_min=a[i];
        
        if(a[i]>s_max&&a[i]!=Max)
            s_max=a[i];
    }
    printf("Second Smallest: %d",s_min);
    printf("\nSecond Largest: %d",s_max);
    return 0;
}
