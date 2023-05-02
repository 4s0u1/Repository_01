#include <stdio.h>
#include <windows.h>

int main(){
    int date,id,d;
    float price = 10;
    char* film[20];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập tên bộ phim: ");
    scanf("%s",film);
    printf("Nhập số lượng vé: ");
    scanf("%d",&d);
    printf("Nhập mã ngày: ");
    scanf("%d",&date);
    printf("Nhập mã vé: ");
    scanf("%d",&id);
    printf("- Thông tin vé:\n");
    printf("- Ngày xem: ");
    if (date){
        printf("Chủ nhật\n");
        price-=3;
    }
    else
        printf("Ngày thường\n");
    price *= d;
    if (id == 1)
        price /= 2;
    printf("- Số lượng vé: %d\n",d);
    printf("- Số tiền thanh toán: %.1f",price);
    return 0;
}
