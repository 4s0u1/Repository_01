#include <stdio.h>
void tinhtoan(int k){
    int d=0;
    for (int i=1;i<=k;i++)
        d+=i;
    printf("%d",d);
}
void nhapdulieu(){
    int n;
    printf("10 < n < 100\n");
    printf("n = ");
    scanf("%d",&n);
    if (n<=10 || n>=100) 
    {   
        printf("Du lieu khong hop le, vui long nhap lai:\n");
        nhapdulieu();  
    }
    else{
    tinhtoan(n);
    }
}

int main()
{
    nhapdulieu();
    return 0;
}