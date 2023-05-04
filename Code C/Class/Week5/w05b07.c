#include <windows.h>
#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float x, y, z, f;
    SetConsoleOutputCP(CP_UTF8);
    printf("Nhập vào 3 giá trị x,y,z: ");
    scanf("%f%f%f", &x, &y, &z);
    f = ((x + y + sqrt(z)) / (x * x + y * y + 1)) - fabs(sin(x) - z * cos(y));
    printf("((x+y+sqrt(z))/(x*x+y*y+1))- fabs(sin(x)-z*cos(y)) = %.4f", f);
    return 0;
}
