#include <stdio.h>

int giaithua(int k){
    if (k == 1)
        return 1;
    else
        return k*giaithua(k-1);
}

int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    printf("%d",giaithua(n));
    return 0;
}