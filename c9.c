#include <stdio.h>

int main()
{
    char s[4];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=97-s[i]+122;
    }
    printf("%s",s);
    return 0;
}
