#include<stdio.h>
#include<string.h>
#include<windows.h>

int check(char *s){
    int n = strlen(s) - 1;
    for(int i = 0; i < (n / 2); i ++){
        if (*(s + i) != *(s + n - i)) 
            return 0;
    }
    return 1;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);    
    char s[100];
    printf("Nhập 1 xâu ký tự: \n");
    scanf("%s", &s);
    if (check(&s[0])) 
        printf("PALINDROME");
    else 
        printf("NOT PALINDROME");
    return 0;
}