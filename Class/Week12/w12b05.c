#include <stdio.h>
#include <windows.h>
float* findAVR(float *p, int size){
    float avr = 0.0;
    for (int i = 0; i < size; i++){
        avr += *(p + i) / size;
    }
    float* locate = p;
    for (int i = 1; i < size; i++){
        if (abs(*locate - avr) > abs(*(p + i) - avr)) 
            locate = (p + i);
    }
    return locate;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Nhập kích thước mảng: ");
    scanf("%d", &n);
    float a[n];
    printf("Nhập mảng: \n");
    for (int i = 0; i < n; i ++)
        scanf("%f", &a[i]);
    printf("Vị trí của giá trị gần với trung bình dãy số nhất là: ");
    float* locate = findAVR(&a[0], n);
    printf("%p %f", locate, *locate);
    return 0;
}