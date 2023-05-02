#include <stdio.h>
#include <windows.h>

int main()
{
    float a;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập số điểm: ");
    scanf("%f",&a);
    if ((a > 10) || (a < 0))
        printf("Nhập không hợp lệ");
        else
            if (a > 9)
            printf("Học lực xuất sắc");
            else
                if (a > 8)
                printf("Học lực giỏi");
                else
                    if (a > 7)
                    printf("Học lực khá");
                    else
                        if (a > 5)
                        printf("Học lực trung bình");
                        else
                        printf("Học lực kém");
    return 0;
}
