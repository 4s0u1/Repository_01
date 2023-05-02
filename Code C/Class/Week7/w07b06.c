#include<stdio.h>

int main()
{
    int n,value=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        value*=i;
    printf("%d",value);
    return 0;
}