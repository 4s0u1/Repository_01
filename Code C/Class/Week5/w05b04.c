#include <windows.h>
#include <stdio.h>

int main()
{
    int a, b;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào số điện tiêu thụ: ");
    scanf("%d", &a);
    b = 0;
    if(a > 50)
    {
        b += 500 * 50;
        if (a > 100)
        {
            b += 1000 * 50;
            if (a > 150)
            {
                b += 1200 * 50;
                b += (a - 150) * 1600;
            }
            else
                b += (a - 100) * 1200;
        }
        else
            b += (a - 50) * 1000;
    }
    else
        b += a * 500;
    printf("Số tiền điện phải trả là: %d", b);
    return 0;

}
