#include <stdio.h>
#include <windows.h>

void change1 (int a[],int size){
    int x;
    for (int i = 0; i < size/2;i++){
        x = a[i];
        a[i]=a[size-i];
        a[size-i]=x;
    }
}

void change2 (int* p,int size){
    int x;
    for (int i = 0; i < size/2;i++){
        x = *(p+i);
        *(p+i) = *(p+size-i);
        *(p+size-i) = x;
    }
}

int main(){
    int n;
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 3:\n");
    printf("Mời nhập kích thước mảng: ");
    scanf("%d",&n);
    int a[n];
    printf("Mời nhập mảng:\n");
    for (int i = 0; i < n;i ++){
        scanf("%d",&a[i]);
    }
    //change1 (a,n-1);
    change2 (&a[0],n-1);
    printf("Mảng sau khi đảo ngược:\n");
    for (int i = 0; i < n;i ++){
        printf("%d ",a[i]);
    }
    return 0;
}