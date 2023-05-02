#include <stdio.h>
#include <windows.h>

int main()
{
    float a,b,c;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập vào 3 số: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Số lớn nhất trong 3 số vừa nhập là: ");
    if (a < b)
        if (a<c)
            printf("%f",a);
        else
            printf("%f",c);
    else
        if (b<c)
            printf("%f",b);
        else
            printf("%f",c);
    return 0;
}
