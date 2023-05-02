#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i, n;
    time_t t;
    n = 5;
   
    srand((unsigned) time(&t));
    for( i = 0 ; i < 100 ; i++ ) 
    {
        int a,b;
        a=1+rand()%6;
        b=1+rand()%6;
        printf("Luot %d: %d va %d\n",i+1,a,b);
        arr[a+b]++;
    }
    printf("Thong ke:\n");
    for(int i=2;i<=12;i++){
        printf("So lan %d xuat hien la: %d\n",i,arr[i]);
    }
    return(0);
}