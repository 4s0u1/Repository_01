#include <stdio.h>
int a[10];
void tinhtoan(int n){
    int d0=0,d=0,tongd=0;
    float tonga=0.0;
    for (int i=1;i<=n;i++){
        printf("%5d",a[i]);
        if (a[i]==0){
            d0++;
        }
        else{
            if (a[i]<0){
                d++;
                tonga+=a[i];
            }
            else{
                tongd+=a[i];
            }
        }
    }
    printf("\nTrung binh cong so am bang %.4f",tonga/d);
    printf("\nTong cac so duong bang %d",tongd);
    printf("\nSo cac so 0 trong day la %d",d0);
}
void nhapsolieu(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    tinhtoan(n);
}

int main(){
    nhapsolieu();
    return 0;
}