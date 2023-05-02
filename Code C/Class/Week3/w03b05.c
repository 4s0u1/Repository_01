#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int h,m,s;
    printf("Mời nhập số giây: ");
    scanf("%d",&s);
    h=s/3600;
    s-=h*3600;
    m=s/60;
    s-=m*60;
    printf("Thời gian chuyển đổi là:");
    printf("%.2d:%.2d:%.2d",h,m,s);
    return 0;
}