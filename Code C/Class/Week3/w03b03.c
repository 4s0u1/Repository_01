#include <windows.h>
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    printf("Mời nhập hai số nguyên: ");
    scanf("%d%d", &a, &b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d + %d = %d", a, b, a + b);
    printf("\n%d * %d = %d", a, b, a * b);
    if (b != 0)
    {
        printf("\n%d / %d = %d",a,b,a/b);
        if (a % b == 0)
            printf("\n%d chia hết cho %d", a, b);
        else
            printf("\n%d không chia hết cho %d", a, b);
    }
    else
        printf("\n%d không thể chia cho %d", a, b);
    return 0;
}