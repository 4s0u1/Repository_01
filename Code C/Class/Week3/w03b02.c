#include <windows.h>
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int d, m, y;
    printf("Mời nhập ngày: ");
    scanf("%d", &d);
    printf("Mời nhập tháng: ");
    scanf("%d", &m);
    printf("Mời nhập năm: ");
    scanf("%d", &y);
    printf("Thời điểm đã nhập vào là:");
    printf("%.2d/%.2d/%.4d", d, m, y);
    return 0;
}