#include <stdio.h>

int main()
{
    int v,w,tw,fw;
    printf("Enter Total no of vehicles: ");
    scanf("%d",&v);
    printf("Enter Total no of wheels: ");
    scanf("%d",&w);
    if((w%2==0)&&(w>=2)&&(w>v)){
        fw=(w-(2*v))/2;
        tw=v-fw;
        printf("TW=%d FW=%d",tw,fw);
    }
    else
        printf("INVALID INPUT");
    return 0;
}
