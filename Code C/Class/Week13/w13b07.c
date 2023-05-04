#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void Ma_hoa_phai(char string[100]){
    char c = string[strlen(string)-1];
    strcpy(&string[1], &string[0]);
    string[0] = c;
    string[strlen(string)-1] = '\0';
}
void Ma_hoa_trai(char string[100]){
    string[strlen(string)] = string[0];
    string[strlen(string) + 1] = '\0';
    strcpy(&string[0], &string[1]);
}
int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 7:\n");
    printf("Nhập vào một xâu kí tự: ");
    scanf("%s",string);
    string[strlen(string)] = '\0'; 
    Ma_hoa_phai(string);
    printf("%s\n", string);
    Ma_hoa_trai(string);
    Ma_hoa_trai(string);
    printf("%s\n", string);
    return 0;
}