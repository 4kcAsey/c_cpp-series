#include <stdio.h>
int main()
{
    int a[3][3],avg[3]={0},i,j;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          scanf("%d",&a[i][j]);   
      }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          avg[i]=avg[i]+a[j][i];
      }
      avg[i]=avg[i]/3;
    }
    int max=avg[1];
    for(int i=0;i<3;i++)
    {
        if(avg[i]>=max)
        {
            printf("Trainee Number: %d\n",i+1);
            max=avg[i];
        }
    }
    return 0;
}
