#include <stdio.h>
#include <math.h>
int main(){
    int i,a;
    scanf("%d",&a);
    i=2;
    while (i <= sqrt(a)&& a%i!=0) i++;
    if (i> sqrt(a)&& a>1) printf("a la so nguyen to");
    else    printf("a khong phai la so nguyen to");
    return 0;
}