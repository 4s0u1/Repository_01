#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    float a,b,c,d,x1,x2;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập vào 3 hệ số a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    d= b * b - 4 * a * c;
    printf("Denta = %.2f",d);
    if (d > 0)
    {
        printf("Phương trình có hai nghiệm phân biệt:\n");
        x1=(b + sqrt(d)) / 2 / a;
        x2=(b - sqrt(d)) / 2 / a;
        printf("x1 = %f",x1);
        printf("x2 = %f",x2);
    }
    if (d == 0)
        printf("Phương trình có nghiệm kép: %f",b / 2 / a);
    if (d < 0)
        printf("Phương trình vô nghiệm");
    return 0;
}
