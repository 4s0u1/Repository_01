#include <stdio.h>
#include <math.h>
void tinhe(){
    float epsilon;
    int i,n;
    double j;
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
}
void tinhpi(){
    float epsilon,d;
    int i,n;
    double j;
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
}
void tinhsin(){
    float x,d;
    double j;
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
}
void choice()
{
    printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- sin(x)\n");
    printf("An phim khac: Thoat\n");
    fflush stdin;
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        tinhe();
        break;
    case 2:
        tinhpi();
        break;
    case 3:
        tinhsin();
        break;
    }
    printf("\nBan co muon tiep tuc? (y/n)\n");
    char c;
    fflush stdin;
    scanf("%d",c);
    if (c='y') choice();
}

int main()
{
    choice();
    return 0;
}