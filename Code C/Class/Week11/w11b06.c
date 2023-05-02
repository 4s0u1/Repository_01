#include<stdio.h>
#include<string.h>
char s1[100], s2[100];
void match(){
    int *p1,*p2,s,n=strlen(s1),m=strlen(s2);
    for (int i=0;i<m;i++){
        *(s1+n+1+i)=*(s2+i);
    }
    for (int i=0;i<=m+n;i++){
        printf("%c",*(s1+i));
    }
}
int main(){
    
    printf("Nhap xau1:\n");
    scanf("%s",&s1);
    printf("Nhap xau2:\n");
    scanf("%s",&s2);
    match(s1,s2);
    return 0;
}