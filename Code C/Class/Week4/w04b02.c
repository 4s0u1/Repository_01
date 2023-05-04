#include <windows.h>
#include <stdio.h>

int main()
{
    char c;
    int d;
    float f;
    double e;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập:\n");
    printf("Kiểu dữ liệu Char: ");
    scanf("%c", &c);
    printf("Kiểu dữ liệu Int: ");
    scanf("%d", &d);
    printf("Kiểu dữ liệu Float: ");
    scanf("%f", &f);
    printf("Kiểu dữ liệu Double: ");
    scanf("%e", &e);
    printf("Dữ liệu dữ liệu vừa nhập là: ");
    printf("%c     %d     %f     %e", c, d, f, e);
    return 0;
}