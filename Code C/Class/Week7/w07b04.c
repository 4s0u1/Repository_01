#include <stdio.h>
#include <windows.h>

int main()
{
    int n;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập n: ");
    scanf("%d",&n);
    printf("Hình tam giác vuông trái trên:\n");
    for (int i = 1;i <= n;i ++)
    {
        for (int j = n; j >= i;j --) printf("* ");
        printf("\n");
    }
    printf("Hình tam giác cân trên:\n");
    for (int i=1; i<=n;i++)
    {
        for (int j=1; j<=n-i;j++)
            printf("  ");
        for (int j=1; j<=i*2-1; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}