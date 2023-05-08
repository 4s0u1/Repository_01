#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char string[100], name[10];
    printf("Nhập họ và tên: ");
    fflush(stdin);
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0'; 
    char *locate = strrchr(string, 32);
    strcpy(&name[0], locate+1);
    printf("Tên vừa nhập là: ");
    printf("%s", name);
    return 0;
}