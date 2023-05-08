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
    int i = 0, space;
    while (i < strlen(string)){
        if(isspace(string[i]) != 0 && isspace(string[i + 1]) != 0){
            space = 0;
            while (isspace(string[i + space + 1]) != 0)
                space ++;            
            strcpy(&string[i], &string[i + space]);
        }
        else
            i ++;
    }
    printf("%s", string);
    return 0;
}