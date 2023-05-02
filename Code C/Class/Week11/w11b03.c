#include <stdio.h>

void swap(int *a,int *b,int *c){
    int p;
    p=*a;
    *a=*b;
    *b=*c;
    *c=p;
}

int main(){
    int x,y,z,*p,*q,*r;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("z = ");
    scanf("%d",&z);
    p=&x;
    q=&y;
    r=&z;
    printf("\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);
    swap(&x,&y,&z);
    printf("\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);
    int *change;
    change = p;
    p=q;
    q=r;
    r=change;
    printf("\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*r = %d\n",*r);
    return 0;
}