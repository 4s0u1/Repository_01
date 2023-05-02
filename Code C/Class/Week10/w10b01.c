#include <stdio.h>
int arr[13];
void insolieu(){
    printf("  Thang    Luong mua trong nam\n");
    for (int i=1;i<=12;i++){
        printf("%5d%18d\n",i,arr[i]);
        
    }
}
void nhapsolieu(){
    for (int i=1;i<=12;i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }    
    insolieu();
}
int main(){
    nhapsolieu();
    return 0;
}