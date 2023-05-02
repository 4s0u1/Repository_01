#include<stdio.h>

int main()
{
    int n;
    float value=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        value += 1.0/i;
    printf("%.2f",value);
    return 0;
}