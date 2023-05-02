#include<stdio.h>
#include <windows.h>
int main()
{
    float a,b,c,d;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào 3 hệ số a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    d = b * b - 4 * a * c;
    printf("Denta = %.4f",d);
    return 0;
}
