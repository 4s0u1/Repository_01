#include <stdio.h>
#include <windows.h>

int main()
{
    int a,b;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập số tự nhiên: ");
    scanf("%d",&a);
    if (a % 2 == 1)
            printf("Bạn vừa nhập vào số lẻ");
    else
            printf("Bạn vừa nhập vào số chẵn");
    return 0;
}
