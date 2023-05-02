#include <stdio.h>
#include <time.h>
#include <windows.h>

void gacha(int a,int b,int c){
    time_t t;
    int x,d = 0;
    srand((unsigned) time(&t));
    for (int i = 1;i <= 3; i++){
        x = rand() % 10;
        printf("Con số may mắn thứ %d là: %d\n",i,x);
        if (a == x) {
            d++;
            a = -1;
            continue;
        }
        if (b == x) {
            d++;
            b = -1;
            continue;
        }
        if (c == x) {
            d++;
            c = -1;
            continue;
        }
    }
    switch(d){
        case 0: 
            printf("Chúc bạn may mắn lần sau");
            break;
        case 1:
            printf("Khuyến khích");
            break;
        case 2:
            printf("Nhất");
            break;
        case 3:
            printf("Đặc biệt");
            break;
    }
}
int main(){
    int a,b,c;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập 3 số may mắn từ 0 đến 9: ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a < 0) || (a > 9) || (b < 0) || (b > 9) || (c < 0) || (c > 9))
        printf("Nhập không hợp lệ");
    else
        gacha(a,b,c);
    return 0;
}
