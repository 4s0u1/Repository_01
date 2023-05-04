#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    char string[100], name[10];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập họ và tên: ");
    fflush(stdin);
    gets(string);
    char *locate = strrchr(string, 32);
    strcpy(&name[0], locate+1);
    printf("%s", name);
    return 0;
}