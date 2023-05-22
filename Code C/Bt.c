#include <stdio.h>
#include <string.h>
#include <math.h>

char s1[] = "Nguyen Pham Quoc Tuan";
char s2[] = "22010508";

void calculator(){
    int day, month, year;
    scanf("%d%d%d", &day, &month ,&year);
    printf("%d %d %d ", day, month, year);
    int bonus = 0;
    if (year % 4 == 0 && year % 100 != 0)
        bonus ++;
    switch (month)
    {
    case 1:
        printf("%d", day);
        break;
    case 2:
        printf("%d", day + 31 );
        break;
    case 3:
        printf("%d", day + 59 + bonus);
        break;
    case 4:
        printf("%d", day + 90 + bonus);
        break;
    case 5:
        printf("%d", day + 120 + bonus);
        break;
    case 6:
        printf("%d", day + 151 + bonus);
        break;
    case 7:
        printf("%d", day + 181 + bonus);
        break;
    case 8:
        printf("%d", day + 212 + bonus);
        break;
    case 9:
        printf("%d", day + 243 + bonus);
        break;
    case 10:
        printf("%d", day + 273 + bonus);
        break;
    case 11:
        printf("%d", day + 304 + bonus);
        break;
    case 12:
        printf("%d", day + 334 + bonus);
        break;
    }
}

void arr(){
    int n;
    scanf("%d",&n);
    float a[100];
    for (int i = 0; i < n; i++)
        scanf("%f", &a[i]);
    float d;
    for (int i = 0; i < n; i++){
        if (a[i] < 0)
            d += a[i];
    }
    printf("%f", d);
}

void search(){
    int n;
    scanf("%d",&n);
    int b[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    int place = -1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] < 2)
            continue;
        if (b[i]  == 2) 
        {
            place = i;
            break;
        } 
        int j = 2;
        while (b[i] % j != 0 && j <= sqrt(b[i]))
            j++;
        if (j > sqrt(b[i]))
        {
            place = i;
            break;
        }
    }
    printf("%d", place);
}

void insert () {
    int n;
    char s[100], s0[100] = "a";
    scanf("%s",s);
    scanf("%d",&n);
    strcpy(&s0[1],&s[n]);
    strcpy(&s[n],s0);
    printf("%s",s);
}


void menu(){
   char name[30], id[10];
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
    printf("Ho va ten: %s \n", name);
    printf("Ma so sinh vien: %s \n", id);
    printf("Chuong trinh tinh: \n");
    printf("Lua chon 1: Cau 1 \n");
    printf("Lua chon 2: Cau 2 \n");
    printf("Lua chon 3: Cau 3 \n");
    printf("Lua chon 4: Cau 4 \n");
    char c;
    int result;
    float result2 = 0.0;
    int n;
    do
    {
        int choice, result;
        printf("Moi lua chon: ");
        fflush(stdin);
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                calculator();
                break;
            case 2:
                arr();
                break;
            case 3:
                search();
                break;
            case 4: 
                insert();
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
    