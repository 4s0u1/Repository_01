#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int r;
    printf("Mời nhập bán kính: \n");
    printf("r = ");
    scanf("%d",&r);
    printf("Diện tích bề mặt hình cầu: %.2f\n",4*3.14*r*r);
    printf("Thể tích hình cầu: %.2f\n",4.0/3*3.14*r*r*r);
    return 0;
}