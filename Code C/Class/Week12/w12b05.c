#include <stdio.h>
#include <windows.h>
float* vitri(float *p,int n){
    float sum = 0.0;
    for (int i=0;i < n;i++){
        sum += *(p+i);
    }
    float avr = sum/n;
    float* min = p;
    for (int i = 1; i < n; i++){
        if (abs(*min-avr) > abs (*(p+i)-avr)) 
            min = (p+i);
    }
    return min;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    printf("Bài 5:\n");
    printf("Nhập kích thước mảng: ");
    int n;
    scanf("%d",&n);
    float a[n];
    printf("Nhập mảng:\n");
    for (int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    printf("Vị trí của giá trị gần với trung bình dãy số nhất là: ");
    float* f = vitri(&a[0],n);
    printf("%p\n",f);
    return 0;
}