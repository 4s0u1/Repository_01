#include <stdio.h>
#include <math.h>
int a[100],n;

void swap(int i,int j){
    int k;
        k=a[i];
        a[i]=a[j];
        a[j]=k;
}

void sort(int k){
    for (int i=k;i <= n/2;i++){
        int min = i,
            left = 2*i,
            right = 2*i+1;
        if (a[left]<a[min]){
            min=left;
        }
        if (right<=n && a[right] < a[min]){
            min=right;
        }
        if (min != i){
            swap(i,min);
        }
    }
}
void add(int x){
    n++;
    int i=n/2;
    a[n]=x;
    while (i>=1){
        sort(i);
        i/=2;
    }
}

int main(){
    printf("n = ");
    scanf("%d",&n);
    printf("nhap day so: \n");
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=n/2;i >= 1;i--){
        sort(i);
    }
    for (int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    add(0);
    printf("\n");
    for (int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}