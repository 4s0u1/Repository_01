#include<stdio.h>
int light[5][3] = {0};
int tieuthu[5][3] = {0};

void onhang(){
    printf("Nhap hang can bat: ");
    int hang;
    scanf("%d", &hang);
    for(int i=0; i<3; i++){
        light[hang-1][i] = 1;
    }
}

void oncot(){
    int cot;
    printf("Nhap cot can bat: ");
    scanf("%d", &cot);
    for(int i=0; i<5; i++){
        light[i][cot-1] = 1;
    }
}

void offhang(){
    printf("Nhap hang can tat: ");
    int hang;
    scanf("%d", &hang);
    for(int i=0; i<3; i++){
        light[hang-1][i] = 0;
    }
}

void offcot(){
    int cot;
    printf("Nhap cot can tat: ");
    scanf("%d", &cot);
    for(int i=0; i<5; i++){
        light[i][cot-1] = 0;
    }
}

void onAT(){
    printf("Nhap vi tri can bat: ");
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    light[hang-1][cot-1] = 1;
}

void offAt(){
    printf("Nhap vi tri can tat: ");
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    light[hang-1][cot-1] = 0;
}

void congsuat(){
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            if(light[i][j] == 1){
                if((i+1)%2==0 && (j+1)%2==0){
                    tieuthu[i][j] = 20;
                }
                else if ((i+1)%2==1 && (j+1)%2==1){
                    tieuthu[i][j] = 10;
                }
                else{
                    tieuthu[i][j] = 15;
                }
            }
        }
    }
    int congsuat=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            congsuat += tieuthu[i][j];
        }
    }
    printf("Cong suat tieu thu hien thoi: %d\n", congsuat);
    
}

void trangthai(){
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("%d ", light[i][j]);
        }
        printf("\n");
    }
}

void menu(){
    int i;
    printf("Lua chon: ");
    scanf("%d", &i);
    while(i>=1 && i<=8){
        switch (i)
        {
        case 1:
            onhang();
            break;
        case 2:
            oncot();
            break;
        case 3:
            offhang();
            break;
        case 4:
            offcot();
            break;
        case 5:
            onAT();
            break;
        case 6:
            offAt();
            break;
        case 7:
            congsuat();
            break;
        case 8:
            trangthai();
            break;
        }
    printf("Lua chon: ");
    scanf("%d", &i);
    }
    
}

int main(){
    printf("1. Nguoi dung bat hang\n");
    printf("2. Nguoi dung bat cot\n");
    printf("3. Nguoi dung tat hang\n");
    printf("4. Nguoi dung tat cot\n");
    printf("5. Nguoi dung bat vi tri\n");
    printf("6. Nguoi dung tat vi tri\n");
    printf("7. Xem cong suat tieu thu hien thoi\n");
    printf("8. Xem trang thai den\n");
    printf("9. Thoat\n");
    menu();
    return 0;
}

