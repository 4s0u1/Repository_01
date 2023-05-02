#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    int date,drug,sur,d,e,f;
    char type[10];
    SetConsoleOutputCP(CP_UTF8);
    printf("Số ngày nằm viện: ");
    scanf("%d",&date);
    printf("Tiền thuốc: ");
    scanf("%d",&drug);
    printf("Tiền phẫu thuật: ");
    scanf("%d",&sur);
    printf("Loại thẻ bảo hiểm: ");
    scanf("%s",&type);
    if (strcmp(type,"gold") == 0){
            d = 45000 * date;
            e = drug * 3 / 10;
            f = sur * 3 / 10;
        }
    else{
        if (strcmp(type,"silver") == 0){
            d = 75000 * date;
            e = drug / 2;
            f = sur / 2;
        }
        else{
            d = 105000 * date;
            e = drug * 7 / 10;
            f = sur * 7 / 10;
        }
    }
    printf("\nViện phí:\n");
    printf("Phí nội trú %d ngày: %d\n",date,d);
    printf("Tiền thuốc: %d\n",e);
    printf("Tiền phẫu thuật: %d\n",f);
    return 0;    
}
