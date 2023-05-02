#include <stdio.h>
#include <stdlib.h>
int  a[11];
void swap(int i,int j){
    int d=a[i];
    a[i]=a[j];
    a[j]=d;
}
void sorttang(int n){
    for (int i=1;i<=n-1;i++)
        for (int j=i+1;j<=n;j++)
            if (a[i] > a[j]) swap(i,j);
    for (int i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void sortgiam(int n){
    for (int i=1;i<=n-1;i++)
        for (int j=i+1;j<=n;j++)
            if (a[i] < a[j]) swap(i,j);
    for (int i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void sortabs(int n){
    for (int i=1;i<=n-1;i++)
        for (int j=i+1;j<=n;j++)
            if (abs(a[i]) > abs(a[j])) swap(i,j);
    for (int i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
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
    sorttang(n);
    sortgiam(n);
    sortabs(n);
}

int main(){
    nhapsolieu();
    return 0;
}