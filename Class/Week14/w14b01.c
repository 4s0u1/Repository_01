#include <stdio.h>
#include <windows.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

date createDate(){
    date temp;
    printf("Mời nhập ngày: ");
    scanf("%d",&temp.day);
    printf("Mời nhập tháng: ");
    scanf("%d",&temp.month);
    printf("Mời nhập năm: ");
    scanf("%d",&temp.year);
    return temp;
}

int compare(date x, date y){
    if (x.year < y.year)
        return -1;
    if (x.year > y.year)
        return 1;
    if (x.month < y.month)
        return -1;
    if (x.month > y.month)
        return 1;
    if (x.day < y.day)
        return -1;
    if (x.day > y.day)
        return 1;
    return 0;
}

void menu(){
    printf("Bảng Điều Khiển: \n");
    printf("1. Lưu mốc thời gian \n");
    printf("2. So sánh 2 mốc thời gian \n");
    printf("3.Else: Exit \n");
    int i;
    do
    {
        printf("\nChọn câu lệnh: ");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            date temp0 = createDate();
            printf("Ngày tháng năm vừa nhập là: %.2d/%.2d/%d \n",temp0.day,temp0.month,temp0.year);
            break;
        case 2:
            printf("Nhập mốc thời gian thứ nhất: \n");
            date temp1 = createDate();
            printf("Ngày tháng năm vừa nhập là: %.2d/%.2d/%d \n",temp1.day,temp1.month,temp1.year);
            date temp2 = createDate();
            printf("Nhập mốc thời gian thứ hai: \n");
            printf("Ngày tháng năm vừa nhập là: %.2d/%2d/%d \n",temp2.day,temp2.month,temp2.year);
            int result = compare(temp1,temp2);
            printf("Két quả so sánh là: %d \n",result);
            break;
        }
    } while (0<i && i<3);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}
