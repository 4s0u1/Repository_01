#include <stdio.h>

int a[51],b[51],c[51],s;

void on(int x){
    if (a[x] == 0){ 
        a[x] = 1;
        b[x] ++;
        c[x] += 400;
        s += 400;
    }
    else printf("BUSY!\n");
} 

void off(int x){
    a[x]=0;
}

void status(){
    printf("Trang thai cac may:\n");
    for (int i = 0; i < 10; i ++){
        for (int j = 1; j <= 5; j ++){
            printf("a[%2d]: ",i*5+j);
            if (a[i*5+j]==0) 
                printf("OFF ");
            else
                printf("ON ");    
        }
        printf("\n");
    }   
}
void tieuthu(){
    printf("Luong dien su dung:\n");
    for (int i = 0; i < 10; i ++){
        for (int j = 1; j <= 5; j ++){
            printf("a[%2d]: ",i*5+j);
            printf("%d ",c[i*5+j]);   
        }
        printf("\n");
    }   
}
void tongtieuthu(){
    printf("Tong luong dien tieu thu la: %d\n",s);
    printf("Tien dien phai tra la: %dVND\n",s*3/4);
}
void solansudung(){
    int max=1,min=1;
    for (int i=2;i<=50;i++){
        if (a[i] > a[max]) max=i;
        if (a[i] < a[min]) min=i; 
    }
    printf("May su dung nhieu nhat la %d\n",max);
    printf("May su dung it nhat la %d\n",min);
}

void menu(){
    int i;
    int k;
    do{ 
        printf("Chon cau lenh:\n");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            printf("Chon vi tri:");
            scanf("%d",&k);
            on(k);
            break;
        case 2:
            printf("Chon vi tri:");
            scanf("%d",&k);
            off(k);
            break;
        case 3:
            status();
            break;
        case 4:
            tieuthu();
            break;
        case 5:
            tongtieuthu();
            break;
        case 6:
            solansudung();
            break;
        }
    }
    while (1 <= i && i <= 6);
}

int main(){
    printf("Danh sach cau lenh:\n");
    printf("1 - Dung may\n");
    printf("2 - Tat may\n");
    printf("3 - In ra trang thai cac may\n");
    printf("4 - In ra dien nang tieu thu cua cac may\n");
    printf("5 - In ra tong so dien nang tieu thu\n");
    printf("6 - In ra may dung nhieu nhat va it nhat\n");
    printf("else = exit\n");
    menu();
}

