#include <stdio.h>

int main()
{
    int num,i,j,flag=0,num2,s;
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("num2:");
    scanf("%d",&num2);
    printf("S:");
    scanf("%d",&s);
    for(i=0;i<num;i+=s)
    {
        flag=0;
        for(j=i;j<i+s&&j<num;j++)
        {
            if(a[j]==num2)
            {
                flag=1;
            }
        }
        if(flag==1)
            {
                continue;
            }
        else
            {
                printf("0");
                break;
            }
    }
    if(flag==1)
    {
        printf("1");
    }
    return 0;
}
