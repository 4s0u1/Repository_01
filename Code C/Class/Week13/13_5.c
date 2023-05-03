#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
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
    gets(string);
    char a, b;
    printf("Nhập vào hai kí tự: ");
    scanf("%c %c", &a, &b);
    replace(string, a, b);
    printf("%s", string);
    return 0;
}