#include <stdio.h>
#include <windows.h>

int main()
{   
    int a;
    float b,c;
    SetConsoleOutputCP(CP_UTF8);
    printf("CHƯƠNG TRÌNH MÁY TÍNH ĐIỆN TỬ\n");
    printf("1 - Phép cộng\n");
    printf("2 - Phép trừ\n");
    printf("3 - Phép nhân\n");
    printf("4 - Phép chia\n");
    printf("Mời bạn chọn phép tính:\n");
    scanf("%d",&a);
    printf("Mời nhập hai số:\n");
    switch (a){
        case 1:
            scanf("%f%f",&b,&c);
            printf("%.2f + %.2f = %.2f",b,c,b+c);
            break;
        case 2:
            scanf("%f%f",&b,&c);
            printf("%.2f - %.2f = %.2f",b,c,b-c);
            break;
        case 3:
            scanf("%f%f",&b,&c);
            printf("%.2f * %.2f = %.2f",b,c,b*c);
            break;
        case 4:
            scanf("%f%f",&b,&c);
            printf("%.2f / %.2f = %.2f",b,c,b/c);
            break;
    }
    return 0;
}
