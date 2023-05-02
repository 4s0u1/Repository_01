#include<stdio.h>
#include<string.h>
int check(char* s){
    for(int i=0;i<strlen(s);i++){
        if (*(s+i)!=*(s+strlen(s)-1-i)) return 0;
    }
    return 1;
}
int main(){
    char* s;
    printf("Nhap xau:\n");
    scanf("%s",s);
    if (check(s)) printf("PALINDROME");
    else printf("NOT PALINDROME");
    return 0;
}