#include <stdio.h>
#include <windows.h>

int main()
{
    int count = 0;
    SetConsoleOutputCP(CP_UTF8);
    printf("Các số thỏa mãn yêu cầu bài toán là:\n");
    for (int i = 0;i <= 9;i++){
        for (int j = 0;j <= 9;j += 3){
            if ( j >= i){
                count++;
                if (i != 0) printf("%d",i);
                if (i != 0 || j != 0) printf("%d",j);
                printf("%d ",j-i);
                if (count % 10 == 0)
                    printf("\n");
            }
        }
    }
    return 0;
}