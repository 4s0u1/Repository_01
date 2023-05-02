#include <stdio.h>
#include <windows.h>

int main()
{
    float a,b;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập vào 2 số: ");
    scanf("%f%f",&a,&b);
    printf("Số lớn hơn trong 2 số vừa nhập là: ");
    if (a > b)
            printf("%f",a);
    else
            printf("%f",b);
    return 0;
}
