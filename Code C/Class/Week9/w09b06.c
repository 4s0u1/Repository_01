#include<stdio.h>
int a,b;
void swap()
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void tinhtoan(){
    while (a % b!=0)
    {
        if (a < b) swap();
        a = a % b;
    }
    printf("%d",b);
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