#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char name1[15],name2[15],locate1[15],locate2[15];
    int  age1,age2;
    printf("Nhập thông tin sinh viên thứ nhất:\n");
    printf("Họ và tên: ");
    scanf("%s",&name1);
    printf("Địa chỉ: ");
    scanf("%s",&locate1);
    printf("Tuổi: ");
    scanf("%d",&age1);
    printf("Nhập thông tin sinh viên thứ hai:\n");
    printf("Họ và tên: ");
    scanf("%s",&name2);
    printf("Địa chỉ: ");
    scanf("%s",&locate2);
    printf("Tuổi: ");
    scanf("%d",&age2);
    printf("Thông tin hai sinh viên vừa nhập là:\n");
    printf("*--------------------------------------------------*\n");
    printf("|            Tên |       Quê Quán |           Tuổi\n");
    printf("*--------------------------------------------------*\n");
    printf("|%15s |%15s |%15d |\n",name1,locate1,age1);
    printf("*--------------------------------------------------*\n");
    printf("|%15s |%15s |%15d |\n",name2,locate2,age2);
    printf("*--------------------------------------------------*\n");
    return 0;
}


