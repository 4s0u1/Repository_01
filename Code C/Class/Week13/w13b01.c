#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    gets(string);
    int count = 0;
    for(int i = 0; i < strlen(string); i ++){
        if(isspace(string[i]) != 0)
            count ++;
    }
    printf("Số kí tự khoảng trắng có trong câu là: %d", count);
    return 0;
}