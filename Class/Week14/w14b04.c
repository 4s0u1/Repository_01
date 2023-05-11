#include <stdio.h>
#include <windows.h>

typedef struct info
{
    char name[20];
    char id[8];
    int number;
} info;

typedef struct exam
{
    int number;
    float score;
} exam;

info createDATA(){
    info student;
    printf("Nhập tên thí sinh: ");
    fflush(stdin);
    fgets(student.name,21,stdin);
    student.name[strlen(student.name)-1] = '\0';
    printf("Nhập mã thí sinh: ");
    fflush(stdin);
    fgets(student.id,9,stdin);
    student.id[strlen(student.id)-1] = '\0';
    printf("Nhập số phách: ");
    scanf("%d",&student.number);
    return student;
}

exam createPOINT(){
    exam student;
    printf("Nhập số phách: ");
    scanf("%d",&student.number);
    printf("Nhập số điểm: ");
    scanf("%f",&student.score);
    return student;
}

void compareDATA(info *x, info *y){
    info medial;
    if (x->number > y->number)
    {
        medial = *x;
        *x = *y;
        *y =medial;
    }
}

void comparePOINT(exam *x, exam *y){
    exam medial;
    if (x->number > y->number)
    {
        medial = *x;
        *x = *y;
        *y =medial;
    }
}

void input(){
    int n;
    printf("Nhập số lượng học sinh: ");
    scanf("%d", &n);
    info stt[n];
    exam stt2[n];
    printf("Nhập thông tin thí sinh: \n");
    for (int i = 0; i < n; i++)
        stt[i]=createDATA();
    printf("Nhập thông tin bài thi: \n");
    for (int i = 0; i < n; i++)
        stt2[i]=createPOINT();
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            compareDATA(&stt[i],&stt[j]);
            comparePOINT(&stt2[i],&stt2[j]);
        }
    printf("+-----+---------------+-----------------------+----------+ \n");
    printf("| STT |  Mã Thí Sinh  |       Họ và Tên       |   Điểm   | \n");
    for (int i = 0; i < n; i++)
    {
        printf("+-----+---------------+-----------------------+----------+  \n");
        printf("| %3.2d | %13s | %21s | %8.2f | \n", i+1, stt[i].id, stt[i].name, stt2[i].score);
    }
        
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    input();
    return 0;
}