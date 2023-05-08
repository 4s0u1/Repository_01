#include<stdio.h>
#include<string.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    char s1[200], s2[100];
    printf("Nhập xâu thứ nhất: \n");
    scanf("%s",&s1);
    printf("Nhập xâu thứ hai: \n");
    scanf("%s",&s2);
    printf("Xâu 1 sau khi được nối thêm xâu 2 là: ");
    strcpy(&s1[strlen(s1)],&s2[0]);
    printf("%s",s1);
    return 0;
}