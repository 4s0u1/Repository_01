#include <windows.h>
#include <stdio.h>

int main()
{
    int quantity;
    float price;
    char title[100], isbn[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập tên cuốn sách: ");
    scanf("%s", &title);
    printf("Nhập giá cuốn sách: ");
    scanf("%f", &price);
    printf("Nhập số lượng: ");
    scanf("%d", &quantity);
    printf("Nhập mã sách: ");
    scanf("%s", &isbn);
    printf("BK Bookseller\n");
    printf("%5s%10s%15s%15s%15s\n","Qty","ISBN","Title","Price","Total");
    printf("%5d%10s%15s%15.3f%15.3f\n", quantity, isbn, title, price, price*quantity); 
    printf("------------------------------------------------------------\n");
    printf("VAT(5%c): %.3f\n",37, price * quantity * 0.05);
    printf("You pay: %.3f", price * quantity * 1.05);
    return 0;
}