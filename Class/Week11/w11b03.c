#include <stdio.h>

void swapVALUE (int *x, int *y, int *z) // Truyền vào địa chỉ của 3 biến giá trị
{
    int value;
    value = *x;
    *x = *y;
    *y = *z;
    *z = value;
}

void swapPOINTER (int **x, int **y, int **z) // Truyền vào địa chỉ của 3 biến con trỏ
{
    int *pointer;
    pointer = *x;
    *x = *y;
    *y = *z;
    *z = pointer;
}

int main(){
    int x,y,z,*p,*q,*r;
    printf("x = ");
    scanf("%d",&x);
    p = &x;
    printf("y = ");
    scanf("%d",&y);
    q = &y;
    printf("z = ");
    scanf("%d",&z);
    r = &z;
    printf("&p = %p \t p = %p \n", &p, p);
    printf("&q = %p \t q = %p \n", &q, q);
    printf("&r = %p \t r = %p \n", &r, r);
   
    printf("\n");
    printf("&x = %p \t x = %d \n", &x, x);
    printf("&y = %p \t y = %d \n", &y, y);
    printf("&z = %p \t z = %d \n", &z, z);

    swapVALUE(&x,&y,&z);
    printf("\n");
    printf("p = %p \t x = %d \n", p, x);
    printf("q = %p \t y = %d \n", q, y);
    printf("r = %p \t z = %d \n", r, z);
    
    swapPOINTER(&p,&q,&r);
    printf("\n");
    printf("&p = %p \t p = %p \n", &p, p);
    printf("&q = %p \t q = %p \n", &q, q);
    printf("&r = %p \t r = %p \n", &r, r);
}
