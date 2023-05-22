#include <stdio.h>
#include <string.h>
#include <math.h>

char s1[30] = "Nguyen Pham Quoc Tuan";
char s2[10] = "22010508";
char s3[10] = "Ha Tinh";

int problem1(){
    int num = 0;
    char name[] = "Nguyen Pham Quoc Tuan";
    char locate[] = "Ha Tinh";
    for (int i = 0; i < strlen(name); i++)
        num += name[i];
    for (int i = 0; i < strlen(locate); i++)
        num += locate[i]; 
    int sum = 0;
    while (num != 0)
    {
        int x = num % 10;
        printf("%d ",x);
        num /= 10;
        int y = 1;
        for (int i = 1; i <= x; i++)
           y*= i;
        sum += y;
    }
    return sum;
}

int problem2(){
    int sum = 0;
    char name[30];
    char locate[20];
    fflush(stdin);
    do
    {
        printf("Nhap ten: ");
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    } while (strcmp(name, s1) != 0);
    do
    {
        printf("Nhap que quan: ");
        fgets(locate, 30, stdin);
        locate[strlen(locate) - 1] = '\0';
    } while (strcmp(locate, s3) != 0);
    for (int i = 0; i < strlen(name); i++)
    {
        int x = name[i] % 10;
        printf("%d ", x);
        sum += x;
    }
    for (int i = 0; i < strlen(locate); i++)
    {
        int x = locate[i] % 10;
        printf("%d ", x);
        sum += x;
    }    
    return sum;
}

void process(int x, int y){
    printf("n = %d m = %d /n");
    /*if (x > y){
        x = x + y;
        y = x - y;
        x = x - y;
    }
    int min = sqrt(x),
        max = sqrt(y);
    int j ;
    for (int i = x + 1; i < y; i++)
    {
        if (i % 2 != 0)
        {
            j = 3;
            while (j <= sqrt(i) && i % j != 0)
                j += 2;
            if (j > sqrt (i)) printf("%d ",j);
        }
    }*/
    //for (int i = min + 1; i < max; i++)
       // printf("%d ", i*i);
    printf("\n");
}

void problem3(){
    /*int n,m = 0;
    char name[30];
    char locate[20];
    fflush(stdin);
    do
    {
        printf("Nhap ten: ");
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    } while (strcmp(name, s1) != 0);
    do
    {
        printf("Nhap que quan: ");
        fgets(locate, 30, stdin);
        locate[strlen(locate) - 1] = '\0';
    } while (strcmp(locate, s3) != 0);

    for (int i = 0; i < strlen(name); i++)
    {
        n = name[i];
        for (int j = 0; j < strlen(locate); j++)
        {
            m = locate[j];
            process(n,m);
        }    
    }*/
}

void menu(){
    char name[30], id[10], class[20], grade[5];
    fflush(stdin);
    do
    {
        printf("Nhap ten: ");
        fgets(name, 30, stdin);
        name[strlen(name) - 1] = '\0';
    } while (strcmp(name,s1)!= 0);
    do
    {
        printf("Nhap ma so sinh vien: ");
        scanf("%s", id);
    } while (strcmp(id,s2)!= 0);
    printf("Nhap lop: ");
    scanf("%s", class);
    printf("Nhap khoa: ");
    scanf("%s", grade);
    printf("Ho va ten: %s \n", name);
    printf("Ma so sinh vien: %s \n", id);
    printf("Lop: %s \n", class);
    printf("Khoa: %s \n", grade);
    printf("Chuong trinh tinh: \n");
    printf("Lua chon 1: Cau 5 \n");
    printf("Lua chon 2: Cau 8 \n");
    printf("Lua chon 3: Cau 10 \n");
    char c;
    do
    {
        int choice, result;
        printf("Moi lua chon: ");
        fflush(stdin);
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                result = problem1();
                printf("\n%d",result);
                break;
            case 2:
                result = problem2();
                printf("\n%d",result);
                break;
            case 3:
                problem3();
                break;
        }
        printf(". Ban co muon tiep tuc khong?(y/n) ");
        fflush(stdin);
        scanf("%c",&c);
    }while(c == 'y');
}

int main(){
    menu();
    return 0;
}