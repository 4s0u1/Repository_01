#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    char string[100], name[10];
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 3:\n");
    printf("Nhập họ và tên: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)] = '\0'; 
    char *locate = strrchr(string, 32);
    strcpy(&name[0], locate+1);
    printf("Tên vừa nhập là: ");
    printf("%s", name);
    return 0;
}