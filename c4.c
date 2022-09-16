#include <stdio.h>

int main()
{
    int row,col,count;
    printf("Enter No. of Row: ");
    scanf("%d",&row);
    printf("Enter No. of Column: ");
    scanf("%d",&col);
    int a[row][col],c[row];
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            scanf("\n%d",&a[i][j]);
        }
    }
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            
            if(a[i][j]==1){
                count++;}
        }
        c[i]=count;
        count=0;
    }
    int max=c[0],v;
    for(int i=1;i<=row;i++)
    {
       if(c[i]>max)
        max=c[i];
        v=i;
    }
    printf("%d",v);
    return 0;
}
