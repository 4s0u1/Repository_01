#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void gotoRIGHT(char string[], int step) {
    char s[strlen(string) - step];
    strncpy(&s[0], &string[0], strlen(string) - step);
    s[strlen(string) - step] = '\0';
    strncpy(&string[0], &string[strlen(string) - step], step);
    strncpy(&string[step], &s[0], strlen(string) - step);
    printf("%s \n", string);
}
void gotoLEFT(char string[], int step) {
    char s[step];
    strncpy(&s[0], &string[0], step);
    strncpy(&string[0], &string[step], strlen(string) - step);
    strncpy(&string[strlen(string) - step], &s[0], step);
    printf("%s \n", string);
}
void menu(){
    char string[100];
    printf("BẢNG ĐIỀU KHIỂN: \n");
    printf("1.Mã Hóa Phải \n");
    printf("2.Mã Hóa Trái \n");
    printf("Else.Exit \n");
    int i;
    do
    {
        printf("Chọn câu lệnh: ");
        fflush(stdin);
        scanf("%d",&i);
        int step;
        switch(i)
        {
            case 1:
                printf("Nhập vào một xâu kí tự: ");
                fflush(stdin);
                fgets(string, sizeof(string), stdin);
                string[strlen(string) - 1] = '\0';
                printf("Nhập số bước dịch chuyển: ");
                scanf("%d", &step);
                step %= strlen(string);
                gotoRIGHT(string, step);
                break;
            case 2:
                printf("Nhập vào một xâu kí tự: ");
                fflush(stdin);
                fgets(string, sizeof(string), stdin);
                string[strlen(string) - 1] = '\0';
                printf("Nhập số bước dịch chuyển: ");
                scanf("%d", &step);
                step %= strlen(string);
                gotoLEFT(string, step);
                break;
        }
    } while (i > 0 && i < 3);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}
