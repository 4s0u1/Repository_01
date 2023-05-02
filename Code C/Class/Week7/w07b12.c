#include <stdio.h>
int main()
{
    double epsilon,value,pi;
    value=1.0;
    pi=1.0;
    int i=1;
    scanf("%f",&epsilon);
    while (1.0/(i*2+1) >= epsilon)
    {
        if (i%2==0)
            pi+=(double)1.0/(i*2+1);
        else
            pi-=(double)1.0/(i*2+1);
        i++;
    }
    printf("%.2f",pi*4);
    return 0;
}