#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    printf("x = ");
    scanf("%f",&x);
    float value=x;
    float d=x;
    int i=0;
    double j=1;
    while (d >= 0.0001)
    {
        i++;
        d = pow(x,i*2+1);
        j *= (i*2)*(i*2+1);
        d/=j;
        int dau=pow(-1,i);
        value+=(dau*d);
    }
    printf("Sin(x) = %.4f",value);
    return 0;
}