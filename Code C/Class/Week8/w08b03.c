#include<stdio.h>

int main()
{
    printf("epsilon = ");
    float epsilon;
    scanf("%f",&epsilon);
    float d=2.0;
    int i=1,j=1;
    while (1.0/j >= epsilon)
    {
        i++;
        j*=i;
        d+=1.0/j;
    }
    printf("%.4f",d);
    return 0;
}
