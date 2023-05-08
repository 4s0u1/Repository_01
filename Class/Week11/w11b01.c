#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c, *p;     //Hàm scanf lưu giá trị đọc được vào ô địa chỉ con trỏ tương ứng.
    printf("a = ");
    scanf("%d", &a);     //Lưu giá trị vào địa chỉ con trỏ của biến a: &a
    printf("b = ");
    scanf("%d", &b);     //Lưu giá trị vào địa chỉ con trỏ của biến b: &b
    printf("c = ");
    scanf("%d", &c);     //Lưu giá trị vào địa chỉ con trỏ của biến c: &c
    printf("Địa chỉ của a là %p \n", &a);
    printf("Địa chỉ của b là %p \n", &b);
    printf("Địa chỉ của c là %p \n", &c);
    return 0;
}