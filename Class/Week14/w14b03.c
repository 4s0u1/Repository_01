#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct goods
{
    char name[20],id[6];
    int number;
    float price,value;
} goods;

goods newDATA(){
    goods info;
    printf("\nNhập tên hàng hóa: ");
    fflush(stdin);
    fgets(info.name,21,stdin);
    info.name[strlen(info.name)-1] = '\0';
    if (strcmp(info.name,"***") == 0)
       return info;
    printf("Nhập mã hàng hóa: ");
    fflush(stdin);
    fgets(info.id,7,stdin);
    info.id[strlen(info.id)-1] = '\0';
    printf("Nhập đơn giá: ");
    scanf("%f",&info.price);
    printf("Nhập số lượng bán: ");
    scanf("%d", &info.number);
    info.value=info.price*info.number;
    return info;
}

void compare(goods *x, goods *y){
    goods medial;
    if (strcmp(x->id, y->id) > 0)
    {
        medial = *x;
        *x = *y;
        *y =medial;
    }
}

void input(){
    goods stt[10];
    int n = -1;
    do
    {
        if (stt[n].value > 500000 || n ==-1)
            n++;
        stt[n] = newDATA();
    } while (strcmp(stt[n].name,"***") != 0);
    for (int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            compare(&stt[i],&stt[j]);
    printf("+-----+-----------+----------------------+---------------+----------+---------------+\n");
    printf("| STT |  Mã hàng  |     Tên hàng hóa     |    Đơn giá    | Số lượng |   Tổng tiền   |\n");
    for (int i = 0; i < n; i++)
    {
        printf("+-----+-----------+----------------------+---------------+----------+---------------+\n");
        printf("| %3.2d | %9s | %20s | %13.2f | %8d | %13.2f |\n", i+1, stt[i].id, stt[i].name, stt[i].price, stt[i].number ,stt[i].value);
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    input();
    return 0;
}




