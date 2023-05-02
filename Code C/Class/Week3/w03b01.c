#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("Mời nhập một số:");
    scanf("%d",&a);
    printf("Bình phương của số đã nhập là: %d\n",a*a);
    printf("Lập phương của số đã nhập là: %d\n",a*a*a);
    return 0;
}