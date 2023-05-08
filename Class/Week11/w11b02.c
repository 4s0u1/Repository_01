#include <stdio.h>
#include <windows.h>

void swap(int *x, int *y, int *z){
    int p;
    p = *x;       // p lưu giá trị của "địa chỉ ô nhớ mà x trỏ tới" (hay địa chỉ/giá trị đang lưu của con trỏ x)
    *x = *y;      // gán lại giá trị của "địa chỉ ô nhớ mà x trỏ tới" với giá trị "địa chỉ ô nhớ mà y trỏ tới"
    *y = *z;      // gán lại giá trị của "địa chỉ ô nhớ mà y trỏ tới" với giá trị "địa chỉ ô nhớ mà z trỏ tới"
    *z = p;       // gán lại giá trị của "địa chỉ ô nhớ mà z trỏ tới" với giá trị p đang lưu.
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    swap(&a, &b, &c);
    printf("Giá trị của a, b, c sau khi thay đổi là:\n");
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %d", c);
    return 0;
}
