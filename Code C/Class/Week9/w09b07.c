#include<stdio.h>
int a,b;
void swap()
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void tinhtoan(){
    int x=a*b;
    if (a < b) swap();
    while (a % b!=0)
    {
        if (a < b) swap();
        b = a%b;
    }
    printf("%d",x/b);
}

void nhapdulieu(){
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    tinhtoan();
}

int main()
{
    nhapdulieu();
    return 0;
}