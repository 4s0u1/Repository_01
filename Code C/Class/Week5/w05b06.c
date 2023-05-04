#include <windows.h>
#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, x1, x2;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập 3 hệ số a,b,c :");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    x1 = (b + sqrt(d)) / 2 / a;
    x2 = (b - sqrt(d)) / 2 / a;
    printf("Nghiệm x1 = %f", x1);
    printf("Nghiệm x2 = %f", x2);
    return 0;
}
