#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("Nhập một số:");
    scanf("%d",&a);
    printf("Tương ứng: %c%d%c%c%c%d%c%c%c%c%d%c%c%c",92,a,37,92,34,a,37,34,92,39,a,37,39,92);
    return 0;
}