#include <stdio.h>

int main(){
    int n;
    printf("nhap kich thuoc matran:\n");
    scanf("%d",&n);
    printf("matran1:\n");
    int a[n][n],b[n][n],c[n][n];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matran 2:\n");
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    return 0;
}