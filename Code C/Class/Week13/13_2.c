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
    int i = 0, j;
    while (i < strlen(string)){
        if(isspace(string[i]) != 0 && isspace(string[i + 1]) != 0){
            j = 0;
            while (isspace(string[i + j + 1]) != 0)
                j ++;            
            strcpy(&string[i], &string[i + j]);
        }
        else
            i ++;
    }
    printf("%s", string);
    return 0;
}