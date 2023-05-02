#include <stdio.h>
#include <time.h>
#include <windows.h>
void buff(float *x,float *y,float *z,int i){
    int j = rand()%3;
    float luck = (rand() % 5) +1;
    *(x+j)*=(100+luck)/100;
    *(y+j)*=(100+luck)/100;
    *(z+j)*=(100+luck)/100;
    printf("Sau vòng đấu thứ %d đấu sĩ thứ %d được buff %f %c\n",i+1,j+1,luck,37);
}

void battle1(float *x,float *y,float *z,int a){
    if (a = 1){
            *x *= 1.02;
            *y *= 1.02;
            *z *= 1.02;
            *(x+1) *= 1.01;
            *(y+1) *= 1.01;
            *(z+1) *= 1.01;
        }
        else{
            *x *= 1.01;
            *y *= 1.01;
            *z *= 1.01;
            *(x+1) *= 1.02;
            *(y+1) *= 1.02;
            *(z+1) *= 1.02;
        }
}    
void battle2(float *x,float *y,float *z,int a){
    
    if (a = 2){
            *(x+1) *= 1.02;
            *(y+1) *= 1.02;
            *(z+1) *= 1.02;
            *(x+2) *= 1.01;
            *(y+2) *= 1.01;
            *(z+2) *= 1.01;
        }
        else{
            *(x+1) *= 1.01;
            *(y+1) *= 1.01;
            *(z+1) *= 1.01;
            *(x+2) *= 1.02;
            *(y+2) *= 1.02;
            *(z+2) *= 1.02;
        }
}    
void battle3(float *x,float *y,float *z,int a){
    
    if (a = 1){
            *x *= 1.02;
            *y *= 1.02;
            *z *= 1.02;
            *(x+1) *= 1.01;
            *(y+1) *= 1.01;
            *(z+1) *= 1.01;
        }
        else{
            *x *= 1.01;
            *y *= 1.01;
            *z *= 1.01;
            *(x+1) *= 1.02;
            *(y+1) *= 1.02;
            *(z+1) *= 1.02;
        }
} 
int arena(float* x,float* y,float* z,int n){
    float d1,d2,d3;
    int i=0;    
    while (i < n){
        switch (i % 3)
        {
        case 0:
            d1 = *x+*y+*z;
            d2 = *(x+1)+*(y+1)+*(z+1);
            if (d1>d2){
                battle1(x,y,z,1);
                buff(x,y,z,i);
            }
            else{
                battle1(x,y,z,2);
                buff(x,y,z,i);
            }
            break;
        case 1:
            d2 = *(x+1)+*(y+1)+*(z+1);
            d3 = *(x+2)+*(y+2)+*(z+2);
            if (d2 > d3){
                battle2(x,y,z,2);
                buff(x,y,z,i);
            }
            else{
                battle2(x,y,z,3);
                buff(x,y,z,i);
            }
            break;
        case 2:
            d1 = *x+*y+*z;
            d3 = *(x+2)+*(y+2)+*(z+2);
            if (d2 > d3){
                battle3(x,y,z,1);
                buff(x,y,z,i);
            }else{
                battle3(x,y,z,3);
                buff(x,y,z,i);
            }
            break;
        }
       i++;
    }
    printf("Chỉ số sau %d ván đấu:\n",n);
    for (int i = 0;i < 3;i ++){
        printf("%.4f %.4f %.4f\n",x[i],y[i],z[i]);
    }
}

int main(){
    time_t t;
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 4:\n");
    float x[3],y[3],z[3];
    printf("Chỉ số 3 đấu sĩ ban đầu:\n");
    srand((unsigned) time(&t));
    for (int i = 0;i < 3;i ++){
        x[i] = rand() % 100+1;
        y[i] = rand() % 100+1;
        z[i] = rand() % 100+1;
        printf("%.4f %.4f %.4f\n",x[i],y[i],z[i]);
    }
    int n;
    
    printf("Nhập số vòng đấu: ");
    scanf("%d",&n);
    arena (&x[0],&y[0],&z[0],n);
    return 0;
}