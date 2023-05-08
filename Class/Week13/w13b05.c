#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>

void replace(char string[100], char a, char b){
    for(int i = 0; i < strlen(string); i ++){
        if(string[i] == a)
            string[i] = b;
    }
}

int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào một xâu kí tự: ");
    fflush(stdin);
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0'; 
    char a, b;
    printf("Nhập vào hai kí tự: ");
    fflush(stdin);
    scanf("%c %c", &a, &b);
    replace(string, a, b);
    printf("%s", string);
    return 0;
}