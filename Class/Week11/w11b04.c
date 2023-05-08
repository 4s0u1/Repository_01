#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n, *p;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhập dãy số: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    n --;
    printf("Dãy số được in ra theo thứ tự ngược lại là: \n");
    for (int i = 0; i < n; i ++){
        printf("%d ", *(a + n - i));
    }
}