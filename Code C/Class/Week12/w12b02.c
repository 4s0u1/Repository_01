#include <stdio.h>
#include <windows.h>

int* maximum (int* p,int size){
    int* max = p;
    for (int i = 0;i < size;i ++){
        if (*(p+i) > *(max)){
            max =  p+i;
        }
    }
    return max;
}

int main(){
    int n;
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 2:\n");
    printf("Mời nhập kích thước mảng: ");
    scanf("%d",&n);
    int a[n];
    printf("Mời nhập mảng:\n");
    for (int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    printf("Địa chỉ của phần từ lớn nhất mảng:\n");
    int* p = maximum(&a[0],n);
    printf("%p\n",p);
    printf("Giá trị lớn nhất mảng: %d",*p);
    return 0;
}