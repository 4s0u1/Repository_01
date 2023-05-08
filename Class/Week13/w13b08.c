#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char string[100];
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0';
    char c;
    printf("Nhập kí tự: ");
    scanf("%c", &c);
    int count = 0;
    for(int i = 0; i < strlen(string); i ++)
        if(string[i] == c)
            count ++;
    printf("Số lần xuất hiện của kí tự '%c' trong xâu là %d", c, count);
    return 0;
}