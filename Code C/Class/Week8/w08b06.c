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
    while (a % b!=0)
    {
        if (a < b) swap();
        a = a%b;
    }
    printf("%d",b);
    return 0;
}