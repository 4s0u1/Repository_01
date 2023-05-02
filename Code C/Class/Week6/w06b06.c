#include <stdio.h>
#include <windows.h>

void duara (int x)
{
    if (x == 0) printf("Không ");
    if (x == 1) printf("Một ");
    if (x == 2) printf("Hai ");
    if (x == 3) printf("Ba ");
    if (x == 4) printf("Bốn ");
    if (x == 5) printf("Năm ");
    if (x == 6) printf("Sáu ");
    if (x == 7) printf("Bảy ");
    if (x == 8) printf("Tám ");
    if (x == 9) printf("Chín ");
}

int main(){
    int a;
    SetConsoleOutputCP(CP_UTF8);
    printf("Mời nhập số có ba chữ số: ");
    scanf("%d",&a);
    duara(a / 100); 
    printf("Trăm ");
    a %= 100; 
    if (a >= 20){
        duara(a / 10);
        printf("Mươi ");
        if (a % 10 != 0) duara(a % 10);
    }
    else{
        if (a >= 10){ 
            printf("Mười ");
            if (a % 10 != 0) duara(a % 10);
        }
        else{
            if (a % 10 != 0){
                printf("Lẻ ");
                duara(a % 10);
            }
        }
    }
    return 0;
}
