#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một câu kết thúc bằng dấu chấm: ");
    fflush(stdin);
    gets(string);
    int count = 0;
    for(int i = 0; i < strlen(string); i ++){
        if(isspace(string[i]) != 0)
            count ++;
    }
    printf("Có %d từ trong câu", count + 1);
    return 0;
}