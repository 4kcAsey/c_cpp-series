#include <stdio.h>

int main()
{
    int n,i=0;
    printf("Value of N:");
    scanf("%d",&n);
    int count=0,flag=0;
    char b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==b[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            printf("%c",b[i]);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("All are even.");
    return 0;
}
