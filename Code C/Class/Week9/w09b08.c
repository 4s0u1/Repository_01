#include <stdio.h>
void cong(){
    int a[10];
    int i,d;
    char c;
    printf("Nhap so thu 1: ");
    scanf("%d",&a[1]);
    printf("Nhap so thu 2: ");
    scanf("%d",&a[2]);
    d=a[1]+a[2];
    printf("Tong hai so la: %d\n",d);
    i=3; 
    do
    {   
        printf("Ban co muon tiep tuc chuong trinh? (y/n):");
        fflush stdin;
        scanf("%c",&c);
        if (c=='y')
        {
            printf("Nhap so thu %d: ",i);
            scanf("%d",&a[i]);
            d+=a[i];
            i++;
        }
    }while (c == 'y');
    printf("Tong cac so vua nhap la: %d",d);
}
void tru(){
    int a[10];
    int i,d;
    char c;
    printf("Nhap so thu 1: ");
    scanf("%d",&a[1]);
    printf("Nhap so thu 2: ");
    scanf("%d",&a[2]);
    d=a[1]-a[2];
    printf("Hieu hai so la: %d\n",d);
    i=3;
    do
    {   
        printf("Ban co muon tiep tuc chuong trinh? (y/n):");
        fflush stdin;
        scanf("%c",&c);
        if (c=='y')
        {
            printf("Nhap so thu %d: ",i);
            scanf("%d",&a[i]);
            d-=a[i];
            i++;
        }
    }while (c=='y');
    printf("Hieu cac so vua nhap la: %d",d);
}
void nhan(){
    int a[10];
    int i,d;
    char c;
    printf("Nhap so thu 1: ");
    scanf("%d",&a[1]);
    printf("Nhap so thu 2: ");
    scanf("%d",&a[2]);
    d=a[1]*a[2];
    printf("Tong hai so la: %d\n",d);
    i=3;
    do
    {   
        printf("Ban co muon tiep tuc chuong trinh? (y/n):");
        fflush stdin;
        scanf("%c",&c);
        if (c=='y')
        {
            printf("Nhap so thu %d: ",i);
            scanf("%d",&a[i]);
            d*=a[i];
            i++;
        }
    }while (c=='y');
    printf("Tich cac so vua nhap la: %d",d);
}
void chia(){
    int a[10];
    int i,d;
    char c;
    printf("Nhap so thu 1: ");
    scanf("%d",&a[1]);
    printf("Nhap so thu 2: ");
    scanf("%d",&a[2]);
    d=a[1]/a[2];
    printf("Tong hai so la: %d\n",d);
    i=3;
    do
    {   
        printf("Ban co muon tiep tuc chuong trinh? (y/n):");
        fflush stdin;
        scanf("%c",&c);
        if (c=='y')
        {
            printf("Nhap so thu %d: ",i);
            scanf("%d",&a[i]);
            d/=a[i];
            i++;
        }
    }while (c=='y');
    printf("Thuong cac so vua nhap la: %d",d);
}
void nhapdulieu(){
    printf("CHUONG TRINH TiNH\n");
    printf("1- Phep cong\n");
    printf("2- Phep tru\n");
    printf("3- Phep nhan\n");
    printf("4- Phep chia\n");
    printf("An phim khac: Thoat\n");
    printf("Moi ban lua chon chuong trinh: ");
    int n;
    scanf("%d",&n);
    switch (n)
    case 1:
    {
        cong();
        break;
    case 2:
        tru();
        break;
    case 3:
        nhan();
        break;
    case 4:
        chia();
        break;
    }
}
int main()
{
    nhapdulieu();
    return 0;
}