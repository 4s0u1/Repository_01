#include <stdio.h>
#include <windows.h>

#define pi 3.141529

int main()
{
    float r;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập bán kính:\n");
    printf("r = ");
    scanf("%f",&r);
    printf("Diện tích hình tròn: %f\n",pi*r*r);
    printf("Chu vi hình tron: %f",2*pi*r);
    return 0;
}