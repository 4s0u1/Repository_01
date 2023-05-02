#include <stdio.h>

int main(){
    int a,b,c,*p;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c); 
    p=&a;
    printf("Dia chi cua a la: %p\n",p);
    p=&b;
    printf("Dia chi cua b la: %p\n",p);
    p=&c;
    printf("Dia chi cua a la: %p\n",p);
    return 0;
}