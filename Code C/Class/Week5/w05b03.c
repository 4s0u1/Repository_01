#include <stdio.h>
#include <windows.h>

int main()
{
    float a, b, c;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào 3 số thực: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Số lớn nhất trong 3 số vừa nhập là: ");
    if (a > b)
    {
        if (a > c)
            printf("%.4f", a);
        else
            printf("%.4f", c);
    }
    else
        if (b > c)
            printf("%.4f", b);
        else
            printf("%.4f", c);
    return 0;
}
