#include <stdio.h>

int main()
{
    int n;
    printf("10 < n < 100\n");
    printf("n = ");
    scanf("%d",&n);
    if (n<10 || n>100) 
    {   
        printf("Du lieu nhap vao khong hop le, vui long nhap lai:\n");
        main();  
    }
    else
    {
        int d=0;
        for (int i=1;i<=n;i++)
            d+=i;
        printf("%d",d);
    }
    return 0;
}