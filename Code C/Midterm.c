#include <stdio.h>
#include <windows.h>

int problem1(char s[30]){

}

int problem2(char s[30]){
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
        sum += (s[i] / 10) % 10;
    return sum;
}

int problem3(char s[30]){
    int sum = 0, count = 0, m = 0,mem;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        int x = s[i];
        while (x > 0)
        {
            sum += x % 10;
            if (count < 4)
            {   
                mem = x % 10;
                for (int j = 0; j < count; j++)
                    mem *= 10;
                m += mem;
                count ++;
            }    
            x /= 10; 
        }
    }
    int y = 0;
    while (y*y < m)
    {
        int x = m - (y * y); 
        printf("%d %d \n", x * x, y);
        y++;
    }
    return sum;
}   


void menu(){
    char s[30] = "Tuan";
    printf("Họ tên sinh viên: Nguyễn Phạm Quốc Tuấn \n");
    printf("Mã số sinh viên: 22010508 \n");
    printf("Chương trình tính: \n");
    printf("Lựa chọn 1: Câu 5 \n");
    printf("Lựa chọn 2: Câu 8 \n");
    printf("Lựa chọn 3: Câu 10 \n");
    char c;
    do
    {
        int choice, result;
        printf("Mời lựa chọn: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                result = problem1(s);
                printf("%d",result);
                break;
            case 2:
                result = problem2(s);
                printf("%d",result);
                break;
            case 3:
                result = problem3(s);
                printf("%d",result);
                break;
        }
        printf(" .Bạn có muốn tiếp tục nữa hay không?(y/n) ");
        fflush(stdin);
        scanf("%c",&c);
    }while(c == 'y');
    printf("Kết thúc.");
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}