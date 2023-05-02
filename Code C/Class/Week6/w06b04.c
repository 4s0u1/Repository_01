#include <stdio.h>
#include <windows.h>

int main()
{
    float a,b,c;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập vào độ dài 3 cạnh:");
    scanf("%f%f%f",&a,&b,&c);
    if ((a + b > c) && ( a + c > b) && (b + c > a))
        printf("Có thể tạo thành tam giác");
    else
        printf("Không thể tạo thành tam giác");
    return 0;
}
