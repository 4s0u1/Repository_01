#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char string[100];
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0'; 
    int count = 0;
    for(int i = 0; i < strlen(string); i ++){
        if(isspace(string[i]) != 0)
            count ++;
    }
    printf("Số kí tự khoảng trắng có trong câu là: %d", count);
    return 0;
}