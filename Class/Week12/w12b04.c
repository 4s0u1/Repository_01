#include <stdio.h>
#include <time.h>
#include <windows.h>
void buff(float *ATK,float *DEF,float *HP){
    int j = rand() % 3;
    float luck = (rand() % 5) + 1;
    printf("\n Sau trận đấu, đấu sĩ thứ %d nhận được chúc phúc, tăng %.0f%c chỉ số.\n", j + 1, luck, 37);
    *(ATK+j) *= 1 + (luck / 100);
    *(DEF+j) *= 1 + (luck / 100);
    *(HP+j) *= 1 + (luck / 100);
    printf(" ATK = %.4f, DEF = %.4f, HP = %.4f \n", *(ATK+j), *(DEF+j), *(HP+j));
}

void battle(float *ATK, float *DEF, float *HP, int a, int b){
    float 
        blue = *(ATK + a) + *(DEF + a) + *(HP + a),
        red = *(ATK + b) + *(DEF + b) + *(HP + b);
    if (blue > red)
    {
        printf("Đấu sĩ thứ %d thắng đấu sĩ thứ %d \n", a+1, b+1);
        *(ATK + a) *= 1.02, *(ATK + b) *= 1.01;
        *(DEF + a) *= 1.02, *(DEF + b) *= 1.01;
        *(HP + a) *= 1.02, *(HP + b) *= 1.01;
    }
    else
    {
        printf("Đấu sĩ thứ %d thắng đấu sĩ thứ %d \n", b+1, a+1);
        *(ATK + a) *= 1.01, *(ATK + b) *= 1.02;
        *(DEF + a) *= 1.01, *(DEF + b) *= 1.02;
        *(HP + a) *= 1.01, *(HP + b) *= 1.02;
    }
}

void arena(float *ATK, float *DEF, float *HP){
    int n,k;
    printf("Mời nhập số vòng đấu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n Trận đấu thứ %d :\n", i + 1);
        k = i % 3;
        switch(k)
        {
            case 0:
                battle(ATK, DEF, HP, 0, 1);
                break;
            case 1:
                battle(ATK, DEF, HP, 1, 2);
                break;
            case 2:
                battle(ATK, DEF, HP, 2, 0);
                break;
        }
        printf("Chỉ số 3 đấu sĩ lúc này: \n");
        for (int i = 0; i < 3; i ++)
            printf("Đấu sĩ thứ %d: ATK = %8.4f    DEF = %8.4f    HP = %8.4f \n", i + 1, *(ATK+i), *(DEF+i), *(HP+i));
        buff(ATK, DEF, HP);
    }
}
void preBATTLE(){
    time_t t;
    srand((unsigned) time(&t));
    float ATK[3], DEF[3], HP[3];
    printf("Chỉ số 3 đấu sĩ ban đầu: \n");
    for (int i = 0; i < 3; i ++){
        ATK[i] = rand() % 100 + 1;
        DEF[i] = rand() % 100 + 1;
        HP[i] = rand() % 100 + 1;
        printf("Đấu sĩ thứ %d: ATK = %8.4f \t DEF = %8.4f \t HP = %8.4f \n", i + 1, ATK[i], DEF[i], HP[i]);
    }
    arena(&ATK[0], &DEF[0], &HP[0]);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    preBATTLE();
    return 0;
}