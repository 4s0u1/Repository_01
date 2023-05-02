#include <stdio.h>
#include <windows.h>

int main()
{   
    char* name[100],class[100],date[100];
    int id;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập thông tin:\n");
    printf("Họ và tên:");
    scanf("%s",&name);
    printf("Mã sinh viên:",id);
    scanf("%d",&id);
    printf("Lớp:",class);
    scanf("%s",&class);
    printf("Ngày sinh:",date);
    scanf("%s",&date);
    printf("Thông tin đã nhập:\n");
    printf("-----------------------\n");
    printf("Họ và tên   : %s\n",name);
    printf("Mã sinh viên: %d\n",id);
    printf("Lớp         : %s\n",class);
    printf("Ngày sinh   : %s",date);
    return 0;
}