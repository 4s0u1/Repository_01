#include <stdio.h>

int main()
{
    int n;
    printf("%c = ",'n');
    scanf("%d",&n);
    int i=2,x=1;
    while (i <= n)
    {
        x*=i;
        i++;
    }
    printf("%d\n",x);
    int j=1,y=1;
    do
    {
        y*=j;
        j++;
    }
    while (j <= n);
    printf("%d",y);
    return 0;
}