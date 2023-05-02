#include<stdio.h>
void tinhtoan(int epsilon){
    float d=2.0;
    int i=1,j=1;
    while (1.0/j >= epsilon)
    {
        i++;
        j*=i;
        d+=1.0/j;
    }
    printf("%.4f",d);
}
void nhapdulieu(){
    printf("epsilon = ");
    float epsilon;
    scanf("%f",&epsilon);
    if (epsilon<=0||epsilon>=1){
        printf("du lieu nhap vao khong hop le, vui long nhap lai\n");
        nhapdulieu();
    }
    else{ 
        tinhtoan(epsilon);
    }
}
int main()
{
    nhapdulieu();
    return 0;
}
