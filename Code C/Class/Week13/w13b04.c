#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    char string[100];
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 4:\n");
    printf("Nhập vào một câu kết thúc bằng dấu chấm: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string)] = '\0'; 
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
    int count = 0;
    for(i = 0; i < strlen(string); i ++){
        if(isspace(string[i]) != 0)
            count ++;
    }
    printf("Có %d từ trong câu", count + 1);
    return 0;
}