#include <stdio.h>

int a[100],b[100];

int compare(int x,int y){
    if (x != y){ 
        return 0;
    }
    for (int i=1;i<=x;i++){
        if (a[i]!=b[i]) return 0;
    }
    return 1;
}

int main(){
    int n,m;
    printf("Nhap kich thuoc mang 1: ");
    scanf("%d",&n);
    printf("Nhap day so:\n");
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("Nhap kich thuoc mang 2: ");
    scanf("%d",&m);
    printf("Nhap day so:\n");
    for (int j=1;j<=m;j++){
        printf("  b[%d]=",j);
        scanf("%d",&b[j]);
    }
    printf("%d",compare(n,m));
    return 0;
}