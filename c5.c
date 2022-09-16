#include <stdio.h>

int main()
{
    int t;
    printf("Value of T:");
    scanf("%d",&t);
    int e[t],l[t],dif=0;
    printf("Enter Values of E:\n");
    for(int i=0;i<t;i++)
    {
        scanf("%d",&e[i]);
    }
    printf("Enter Values of L:\n");
    for(int i=0;i<t;i++)
    {
        scanf("%d",&l[i]);
    }
    int max=0;
    for(int i=0;i<t;i++)
    {
            dif=(dif+e[i])-l[i];
            if(dif>max)
            {
                max=dif;
            }
    }
    printf("Maximum no. of guest: %d",max);
    return 0;
}
