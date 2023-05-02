#include <stdio.h>

int main()
{
    printf("CHUONG TRINH TiNH\n");
    printf("1- Phep cong\n");
    printf("2- Phep tru\n");
    printf("3- Phep nhan\n");
    printf("4- Phep chia\n");
    printf("An phim khac: Thoat\n");
    printf("Moi ban lua chon chuong trinh: ");
    int n,i,d,k;
    int a[10];
    scanf("%d",&n);
    switch (n)
    case 1:
    {
        printf("Nhap so thu 1: ");
        scanf("%d",&a[1]);
        printf("Nhap so thu 2: ");
        scanf("%d",&a[2]);
        d=a[1]+a[2];
        printf("Tong hai so la: %d\n",d);
        i=3;
        do
        {   
            printf("Ban co muon tiep tuc chuong trinh? (yes-1/no-0):");
            scanf("%d",&k);
            if (k==1)
            {
                printf("Nhap so thu %d: ",i);
                scanf("%d",&a[i]);
                d+=a[i];
                i++;
            }
        }while (k == 1);
        printf("Tong cac so vua nhap la: %d",d);
        break;
    case 2:
        printf("Nhap so thu 1: ");
        scanf("%d",&a[1]);
        printf("Nhap so thu 2: ");
        scanf("%d",&a[2]);
        d=a[1]-a[2];
        printf("Hieu hai so la: %d\n",d);
        i=3;
        do
        {   
            printf("Ban co muon tiep tuc chuong trinh? (yes-1/no-0):");
            scanf("%d",&k);
            if (k==1)
            {
                printf("Nhap so thu %d: ",i);
                scanf("%d",&a[i]);
                d-=a[i];
                i++;
            }
        }while (k == 1);
        printf("Hieu cac so vua nhap la: %d",d);
        break;
    case 3:
        printf("Nhap so thu 1: ");
        scanf("%d",&a[1]);
        printf("Nhap so thu 2: ");
        scanf("%d",&a[2]);
        d=a[1]*a[2];
        printf("Tong hai so la: %d\n",d);
        i=3;
        do
        {   
            printf("Ban co muon tiep tuc chuong trinh? (yes-1/no-0):");
            scanf("%d",&k);
            if (k==1)
            {
                printf("Nhap so thu %d: ",i);
                scanf("%d",&a[i]);
                d*=a[i];
                i++;
            }
        }while (k == 1);
        printf("Tich cac so vua nhap la: %d",d);
        break;
    case 4:
        printf("Nhap so thu 1: ");
        scanf("%d",&a[1]);
        printf("Nhap so thu 2: ");
        scanf("%d",&a[2]);
        d=a[1]/a[2];
        printf("Tong hai so la: %d\n",d);
        i=3;
        do
        {   
            printf("Ban co muon tiep tuc chuong trinh? (yes-1/no-0):");
            scanf("%d",&k);
            if (k==1)
            {
                printf("Nhap so thu %d: ",i);
                scanf("%d",&a[i]);
                d/=a[i];
                i++;
            }
        }while (k == 1);
        printf("Thuong cac so vua nhap la: %d",d);
        break;
    default:
        break;
    }
    return 0;
    
}