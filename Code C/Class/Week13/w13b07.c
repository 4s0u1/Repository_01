#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void Ma_hoa_phai(char string[100]){
    char c = string[strlen(string) - 1];
    strcpy(&string[1], &string[0]);
    string[0] = c;
    string[strlen(string) - 1] = '\0';
    printf("%s\n", string);
}
void Ma_hoa_trai(char string[100]){
    string[strlen(string)] = string[0];
    string[strlen(string) + 1] = '\0';
    strcpy(&string[0], &string[1]);
    printf("%s\n", string);
}
int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    gets(string);
    Ma_hoa_phai(string);
    Ma_hoa_trai(string);
    Ma_hoa_trai(string);
    return 0;
}