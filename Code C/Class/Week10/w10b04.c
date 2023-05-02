#include <stdio.h>
int a[10],b[10],c[10];
void addb(int i,int d){
    b[i]= d;
}
void addc(int i,int d){
    c[i]= d;
}

void nhapsolieu(){
    int n,j=0,k=0;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        if (a[i]>=0){
            j++;
            addb(j,a[i]);
        }else{
            k++;
            addc(k,a[i]);
        }
        printf("\n");
    }
    for (int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i=1;i<=j;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    for (int i=1;i<=k;i++){
        printf("%d ",c[i]);
    }
}

int main(){
    nhapsolieu();
    return 0;
}