#include<stdio.h>
int a,b;
void swap()
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    int x=a*b;
    if (a < b) swap();
    while (a % b!=0)
    {
        a = a%b;
        if (a < b) swap();
    }
    printf("%d",x/b);
    return 0;
}