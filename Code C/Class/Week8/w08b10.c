#include <stdio.h>
#include <math.h>
void choice()
{
    printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- sin(x)\n");
    printf("An phim khac: Thoat\n");
    float d,epsilon,x;
    int i,n,z=1;
    double j;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("epsilon = ");
        scanf("%f",&epsilon);
        float pi=1.0, k=1.0;
        i=0;
        while (k>=epsilon)
        {
            i++;
            k=1.0/(i*2+1);
            j=pow(-1,i);
            pi+=j*k;
        }
        printf("%f",pi*4);
        printf("\nBan co muon tiep tuc? (yes-1/no-0)\n");
        scanf("%d",&z);
        if (z ==1) choice();
        break;
    case 2:
        printf("epsilon = ");
        scanf("%f",&epsilon);
        d=1.0;
        i=1,j=1;
        while (1.0/j >= epsilon)
        {
            i++;
            j*=i;
            d+=1.0/j;
        }
        printf("%.4f",d);
        printf("\nBan co muon tiep tuc? (yes-1/no-0)\n");
        scanf("%d",&z);
        if (z ==1) choice();
        break;
    case 3:
        printf("x = ");
        scanf("%f",&x);
        float value=x;
        d=x;
        int i=0;
        j=1;
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
        printf("\nBan co muon tiep tuc? (yes-1/no-0)\n");
        scanf("%d",&z);
        if (z ==1) choice();
    default:
        break;
    }
}
int main()
{
    choice();
    return 0;
}