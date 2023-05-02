#include <stdio.h>

void sortup(int first,int last,int arr[]){
    int i = first,
        j = last,
        m = (i+j)/2;
    while (i <= j){
        while (arr[i] < arr[m]) i++;
        while (arr[m] < arr[j]) j--;
        if (i <= j){
            int  x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
            i++;
            j--;
        }
    }
    if (first < j) sortup (first,j,arr);
    if (i < last) sortup (i,last,arr);
}
void sortdown(int first,int last,int arr[]){
    int *n,
        i = first,
        j = last,
        m = (i+j)/2;
    while (i <= j){
        while (arr[i] > arr[m]) i++;
        while (arr[m] > arr[j]) j--;
        if (i <= j){
            int  x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
            i++;
            j--;
        }
    }
    if (first < j) sortdown (first,j,arr);
    if (i < last) sortdown (i,last,arr);
}

void menu(){
    int n;
    printf("Nhap kich thuoc mang muon tao:\n");
    printf("n = "); scanf("%d",&n);
    int arr[n];
    printf("Nhap day so: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Lua chon trat tu sap xep:\n");
    printf("1 - Sap xep tang dan.\n");
    printf("2 - Sap xep giam dan.\n");
    char c;
    fflush stdin;
    scanf("%c",&c);
    if (c=='1')  
        sortup(0,n-1,arr);
    else   
        sortdown(0,n-1,arr);
    printf("Ket qua:\n");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main(){
    menu();
    return 0;
}