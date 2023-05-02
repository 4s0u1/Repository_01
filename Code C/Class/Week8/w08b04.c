#include<stdio.h>
#include<math.h>
int main()
{
    printf("epsilon = ");
    float epsilon;
    scanf("%f",&epsilon);
    float pi=1.0, k=1.0;
    int i=0;
    while (k>=epsilon)
    {
        i++;
        k=1.0/(i*2+1);
        int j=pow(-1,i);
        pi+=j*k;
    }
    printf("%f",pi*4);
    return 0;
}