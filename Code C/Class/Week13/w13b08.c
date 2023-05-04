#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    gets(string);
    char c;
    printf("Nhập kí tự: ");
    scanf("%c", &c);
    int count = 0;
    for(int i = 0; i < strlen(string); i ++){
        if(string[i] == c)
            count ++;
    }
    printf("Số lần xuất hiện của kí tự '%c' trong xâu là %d", c, count);
    return 0;
}