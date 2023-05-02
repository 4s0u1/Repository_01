#include <stdio.h>
#include <windows.h>

int main()
{
    int x,y;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập phần nguyên: ");
    scanf("%d",&x);
    printf("Nhập phần thập phân: ");
    scanf("%d",&y);
    while (y > 100)
        y = y / 10;
    printf("%d.%d",x,y);
    return 0;
}
