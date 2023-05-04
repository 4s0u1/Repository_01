#include <windows.h>
#include <stdio.h>

#define pi 3.141529

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int r;
    printf("Mời nhập bán kính: \n");
    printf("r = ");
    scanf("%d", &r);
    printf("Diện tích bề mặt hình cầu: %.2f\n",4 * pi * r * r);
    printf("Thể tích hình cầu: %.2f\n",4.0 / 3 * pi * r * r * r);
    return 0;
}