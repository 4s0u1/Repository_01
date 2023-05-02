#include<stdio.h>

int main()
{
    int n,value=0;;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        value+=i;
    printf("%d",value);
    return 0;
}