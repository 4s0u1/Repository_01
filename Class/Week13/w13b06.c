#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gotoRIGHT(char string[], int step) {
    int len = strlen(string);
    for (int i = 0; i < len; i ++) {
        if (isalpha(string[i])) { 
            if (isupper(string[i])) { 
                string[i] = 'A' + ((string[i] - 'A') + step) % 26 ;
            }
            else {
                string[i] = 'a' + ((string[i] - 'a') + step) % 26;
            }
        }
    }
}
void menu(){
    char string[100];
    printf("BẢNG ĐIỀU KHIỂN: \n");
    printf("1.Mã Hóa \n");
    printf("2.Giải Mã \n");
    printf("Else.Exit \n");
    int i;
    do
    {
        printf("Chọn câu lệnh: ");
        fflush(stdin);
        scanf("%d",&i);
        printf("Nhập vào một xâu kí tự: ");
        fflush(stdin);
        fgets(string, sizeof(string), stdin);
        string[strlen(string) - 1] = '\0'; 
        int step;
        switch(i)
        {
            case 1:
                printf("Nhập số bước dịch chuyển: ");
                scanf("%d", &step);
                gotoRIGHT(string, step);
                printf("Xâu sau khi mã hóa: %s\n", string);
                break;
            case 2:
                for (int j = 1; j < 26; j ++)
                {
                    gotoRIGHT(string, 1); 
                    printf("%2.d StepBack: %s\n", 26 - j, string);
                }
                break;
        }
    } while (i > 0 && i < 3);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}
