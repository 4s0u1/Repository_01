#include <stdio.h>

int main()
{
    float epsilon,value=1,e=2;
    int i=1;
    scanf("%f",&epsilon);
    while ((1/value) >= epsilon)
    {
        i++;
        value*=i;
        e+=1/value;
    }
    printf("%.2f",e);
    return 0;
}