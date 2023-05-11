#include <stdio.h>
#include <windows.h>

typedef struct data {
    char name[20];
    int id;
    float score;
} data;

data newDATA(){
    data info;
    printf("Nhập tên học sinh: ");
    fflush(stdin);
    fgets(info.name,21,stdin);
    info.name[strlen(info.name)-1] = '\0';
    printf("Nhập mã sinh viên: ");
    scanf("%d",&info.id);
    printf("Nhập điểm: ");
    scanf("%f",&info.score);
    return info;
}

void compare(data *x,data *y){
    data medial;
    if (x->score < y->score ||(x->score == y->score&&strcmp(x->name,y->name) == 1))
    {
        medial = *x;
        *x = *y;
        *y = medial; 
    }
}
void input(){
    int n;
    printf("Nhập số lượng học sinh: ");
    scanf("%d", &n);
    data stt[n];
    for (int i = 0; i < n; i++)
        stt[i] = newDATA();
    for (int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            compare(&stt[i],&stt[j]);
    printf("+-----+-----------+-----------------------+--------+\n");
    printf("| STT |    MSV    |       Họ và Tên       |  Điểm  |\n");
    for (int i = 0; i < n; i++)
    {
        printf("+-----+-----------+-----------------------+--------+\n");
        printf("| %3d | %9d | %21s | %5.2f  |\n", i+1, stt[i].id, stt[i].name, stt[i].score);
    }
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
    input();
    return 0;
}