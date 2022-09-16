#include <stdio.h>

int ways(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
        return ways(n-1)+ways(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ways(n));
    return 0;
}
