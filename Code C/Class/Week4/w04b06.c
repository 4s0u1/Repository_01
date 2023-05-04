#include <windows.h>
#include <stdio.h>

int main()
{
    int stt;
    char date[10];
    char class[10];
    char subject[30];
    char timestart[10];
    char timeend[10];
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập thông tin:\n");
    printf("Nhập số thứ tự: ");
    scanf("%d", &stt);
    printf("Nhập ngày tháng: ");
    scanf("%s", &date);
    printf("Nhập tên lớp học: ");
    scanf("%s", &class);
    printf("Nhập môn học: ");
    scanf("%s", &subject);
    printf("%s","Nhập thời điểm bắt đầu: ");
    scanf("%s", &timestart);
    printf("%s","Nhập thời điểm kết thúc: ");
    scanf("%s", &timeend);
    printf("%3s%15s%20s%20s%20s%20s\n", "STT", "DATE", "CLASS", "SUBJECT", "TIME START", "TIME END");
    printf("%3d%15s%20s%20s%20s%20s", stt, date, class, subject, timestart, timeend);
    return 0;
}  