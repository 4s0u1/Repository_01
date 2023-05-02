#include <stdio.h>

int a[20];

void tinhtoan(int n){
    for (int i=2;i<=n-1;i++){
        if (a[i] > a[i-1] && a[i]>a[i+1]){
            printf("%d ",a[i]);
        }
    }
}

void nhapsolieu(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    tinhtoan(n);
}

int main(){
    nhapsolieu();
    return 0;
}