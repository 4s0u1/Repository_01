#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maHoa(char string[], int step) {
    int len = strlen(string);
    for (int i = 0; i < len; i ++) {
        if (isalpha(string[i])) { 
            if (isupper(string[i])) { 
                string[i] = ((string[i] - 'A') + step) % 26 + 'A';
            }
            else {
                string[i] = ((string[i] - 'a') + step) % 26 + 'a';
            }
        }
    }
}

void giaiMa(char string[], int step) {
    maHoa(string, 26 - step); 
}

int main() {
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một xâu kí tự: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)] = '\0'; 
    printf("Nhập số bước dịch chuyển: ");
    int step;
    scanf("%d", &step);
    maHoa(string, step);
    printf("Xâu sau khi mã hóa: %s\n", string);
    giaiMa(string, step); 
    printf("Xâu sau khi giải mã: %s\n", string);
    return 0;
}
