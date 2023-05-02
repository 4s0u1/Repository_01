#include <stdio.h>
#include <windows.h>

int main()
{
    char name[40];
    int value;
    float laisuat;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập tên: ");
    scanf("%s",&name);
    printf("Mời nhập tiền gửi: ");
    scanf("%d",&value);
    printf("Mời nhập lãi suất: ");
    scanf("%f",&laisuat);
    laisuat/=100;
    printf("%10s%30s%30s%30s","Tháng","Tiền đầu kì", "Tiền lãi", "Số dư");
    for (int i = 1;i <= 12;i ++)
    {
        printf("\n%10d%30d%30.0f%30.0f",i,value,value*laisuat,value+value*laisuat);
        value*=(1+laisuat);
    }
    return 0;
}