#include <stdio.h>
#include <windows.h>

int main()
{
    int age;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập số tuổi: ");
    scanf("%d",&age);
    if (age > 60)
        printf("Người già");
    else
        if (age > 40)
        printf("Trung niên");
        else
            if (age > 18)
            printf("Thanh niên");
            else
                if (age > 15)
                printf("Học sinh cấp 3");
                else
                    if (age > 11)
                    printf("Học sinh cấp 2");
                    else
                        if (age > 6)
                        printf("Học sinh cấp 1");
                        else
                            printf("Trẻ em");
    return 0;
}
