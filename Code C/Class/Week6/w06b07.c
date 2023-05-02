#include <stdio.h>
#include <windows.h>

int main()
{
    int a;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập tháng: ");
    scanf("%d",&a);
    switch(a)
    {
        case 2: 
            printf("Tháng %d có 28 hoặc 29 ngày",a); 
            break;
        case 4:
            printf("Tháng %d có 30 ngày",a); 
            break;
        case 6:
            printf("Tháng %d có 30 ngày",a); 
            break;
        case 9:
            printf("Tháng %d có 30 ngày",a); 
            break;
        case 11:
            printf("Tháng %d có 30 ngày",a); 
            break;
        default:
            printf("Tháng %d có 31 ngày",a);
            break;
    }
    return 0;
}
