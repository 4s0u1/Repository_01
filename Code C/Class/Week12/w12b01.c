#include <stdio.h>
#include <windows.h>

int countEven (int* p, int n){
    int d = 0;
    for (int i = 0; i < n; i++){
        if (*(p + i) % 2 == 0) 
            d ++;
    }
    return d;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Bài 1:\n");
    printf("Mời nhập kích thước mảng: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhập các phần tử:\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Số phần tử chẵn trong dãy: ");
    int kq = countEven(&a[0],n);
    printf("%d",kq);
    return 0;
}