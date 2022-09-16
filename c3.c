#include <stdio.h>

int main()
{
    int a[]={7,4,8,2,9},c=0;
    for(int i=0;i<5;i++)
    {
        if(i==0){
            c++;
        }
        else{
            if(a[i-1]<a[i])
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
