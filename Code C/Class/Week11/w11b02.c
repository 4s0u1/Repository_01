#include <stdio.h>

void swap(int *a,int *b,int *c){
    int p;
    p=*a;
    *a=*b;
    *b=*c;
    *c=p;
}
int main(){
    int a,b,c;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    swap(&a,&b,&c);
    printf("Gia tri sau khi thay doi:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    return 0;
}
