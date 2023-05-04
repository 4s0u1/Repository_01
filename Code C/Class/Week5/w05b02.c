#include <stdio.h>
#include <windows.h>

int main()
{
    int a, b, c;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào 3 số: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Kq1 = a++ + ++a = %d \n", a ++ + ++ a);
    printf("Kq2 = --a - b-- * ++c = %d", -- a - b -- * ++ c);
    return 0;
}
