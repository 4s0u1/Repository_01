#include<stdio.h>
#include<math.h>
void tinhtoan(float epsilon){
    float pi=1.0, k=1.0;
    int i=0;
    while (k >= epsilon){
        i++;
        k=1.0/(i*2+1);
        int j=pow(-1,i);
        pi+=j*k;
    }
    printf("%f",pi*4);
}
void nhapdulieu(){
    printf("epsilon = ");
    float epsilon;
    scanf("%f",&epsilon);
    if (epsilon <= 0 || epsilon >= 1){
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